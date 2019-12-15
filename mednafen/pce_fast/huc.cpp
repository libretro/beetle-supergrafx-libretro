/* Mednafen - Multi-system Emulator
 *
 *  Portions of this file Copyright (C) 2004 Ki
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

/*
 TODO: Allow HuC6280 code to execute properly in the Street Fighter 2 mapper's bankswitched region.
*/

#include <retro_miscellaneous.h>

#include "pce.h"
#include <errno.h>
#include "pcecd.h"
#include "../hw_misc/arcade_card/arcade_card.h"
#include "../file.h"
#include "../cdrom/cdromif.h"
#include "../mempatcher.h"

#include "huc.h"

extern "C" unsigned long crc32(unsigned long crc, const unsigned char *buf, unsigned int len);

static const uint8 BRAM_Init_String[8] = { 'H', 'U', 'B', 'M', 0x00, 0x88, 0x10, 0x80 }; //"HUBM\x00\x88\x10\x80";

ArcadeCard *arcade_card = NULL;

static uint8 *HuCROM = NULL;

bool IsPopulous;
bool PCE_IsCD;

uint8 SaveRAM[2048];

static DECLFW(ACPhysWrite)
{
 arcade_card->PhysWrite(A, V);
}

static DECLFR(ACPhysRead)
{
 return(arcade_card->PhysRead(A));
}

static DECLFR(SaveRAMRead)
{
 if((!PCE_IsCD || PCECD_IsBRAMEnabled()) && (A & 8191) < 2048)
  return(SaveRAM[A & 2047]);
 else
  return(0xFF);
}

static DECLFW(SaveRAMWrite)
{
 if((!PCE_IsCD || PCECD_IsBRAMEnabled()) && (A & 8191) < 2048)
  SaveRAM[A & 2047] = V;
}

static DECLFR(HuCRead)
{
 return ROMSpace[A];
}

static DECLFW(HuCRAMWrite)
{
 ROMSpace[A] = V;
}

static DECLFW(HuCRAMWriteCDSpecial) // Hyper Dyne Special hack
{
 BaseRAM[0x2000 | (A & 0x1FFF)] = V;
 ROMSpace[A] = V;
}

static uint8 HuCSF2Latch = 0;

static DECLFR(HuCSF2Read)
{
 return(HuCROM[(A & 0x7FFFF) + 0x80000 + HuCSF2Latch * 0x80000 ]); // | (HuCSF2Latch << 19) ]);
}

static DECLFW(HuCSF2Write)
{
 if((A & 0x1FFC) == 0x1FF0)
 {
  HuCSF2Latch = (A & 0x3);
 }
}

static void Cleanup(void)
{
   if(arcade_card)
      delete arcade_card;
   arcade_card = NULL;

   if(PCE_IsCD)
      PCECD_Close();

   if(HuCROM)
      MDFN_free(HuCROM);
   HuCROM = NULL;
}

uint32 HuC_Load(MDFNFILE *fp)
{
 uint32 sf2_threshold = 2048 * 1024;
 uint32 sf2_required_size = 2048 * 1024 + 512 * 1024;
 uint64 len = GET_FSIZE_PTR(fp);

 uint64 headerlen = 0;
 if(len & 512) // Skip copier header.
 {
  headerlen = 512;
  len &= ~headerlen;  
 }

 uint64 m_len = (len + 8191)&~8191;
 bool sf2_mapper = FALSE;

 if(m_len >= sf2_threshold)
 {
  sf2_mapper = TRUE;

  if(m_len != sf2_required_size)
   m_len = sf2_required_size;
 }

 IsPopulous = 0;
 PCE_IsCD = 0;

 if(!(HuCROM = (uint8 *)MDFN_malloc(m_len, _("HuCard ROM"))))
    return 0;

 memset(HuCROM, 0xFF, m_len);
 memcpy(HuCROM, GET_FDATA_PTR(fp) + headerlen, MIN(m_len, len));

 uint32 crc = crc32(0, GET_FDATA_PTR(fp) + headerlen, MIN(m_len, len));

 MDFN_printf(_("ROM:       %uKiB\n"), MIN(m_len, len) / 1024);
 MDFN_printf(_("ROM CRC32: 0x%04x\n"), crc);

 memset(ROMSpace, 0xFF, 0x88 * 8192 + 8192);

 if(m_len == 0x60000)
 {
  memcpy(ROMSpace + 0x00 * 8192, HuCROM, 0x20 * 8192);
  memcpy(ROMSpace + 0x20 * 8192, HuCROM, 0x20 * 8192);
  memcpy(ROMSpace + 0x40 * 8192, HuCROM + 0x20 * 8192, 0x10 * 8192);
  memcpy(ROMSpace + 0x50 * 8192, HuCROM + 0x20 * 8192, 0x10 * 8192);
  memcpy(ROMSpace + 0x60 * 8192, HuCROM + 0x20 * 8192, 0x10 * 8192);
  memcpy(ROMSpace + 0x70 * 8192, HuCROM + 0x20 * 8192, 0x10 * 8192);
 }
 else if(m_len == 0x80000)
 {
  memcpy(ROMSpace + 0x00 * 8192, HuCROM, 0x40 * 8192);
  memcpy(ROMSpace + 0x40 * 8192, HuCROM + 0x20 * 8192, 0x20 * 8192);
  memcpy(ROMSpace + 0x60 * 8192, HuCROM + 0x20 * 8192, 0x20 * 8192);
 }
 else
 {
  memcpy(ROMSpace + 0x00 * 8192, HuCROM, (m_len < 1024 * 1024) ? m_len : 1024 * 1024);
 }

 for(int x = 0x00; x < 0x80; x++)
 {
  HuCPU.FastMap[x] = &ROMSpace[x * 8192];
  HuCPU.PCERead[x] = HuCRead;
 }

 if(!memcmp(HuCROM + 0x1F26, "POPULOUS", strlen("POPULOUS")))
 {
  uint8 *PopRAM = ROMSpace + 0x40 * 8192;
  memset(PopRAM, 0xFF, 32768);

  IsPopulous = 1;

  MDFN_printf("Populous\n");

  for(int x = 0x40; x < 0x44; x++)
  {
   HuCPU.FastMap[x] = &PopRAM[(x & 3) * 8192];
   HuCPU.PCERead[x] = HuCRead;
   HuCPU.PCEWrite[x] = HuCRAMWrite;
  }
  MDFNMP_AddRAM(32768, 0x40 * 8192, PopRAM);
 }
 else
 {
  memset(SaveRAM, 0x00, 2048);
  memcpy(SaveRAM, BRAM_Init_String, 8);    // So users don't have to manually intialize the file cabinet
                                                // in the CD BIOS screen.
  HuCPU.PCEWrite[0xF7] = SaveRAMWrite;
  HuCPU.PCERead[0xF7] = SaveRAMRead;
  MDFNMP_AddRAM(2048, 0xF7 * 8192, SaveRAM);
 }

 // 0x1A558
 //if(len >= 0x20000 && !memcmp(HuCROM + 0x1A558, "STREET FIGHTER#", strlen("STREET FIGHTER#")))
 if(sf2_mapper)
 {
  for(int x = 0x40; x < 0x80; x++)
  {
   HuCPU.PCERead[x] = HuCSF2Read;
  }
  HuCPU.PCEWrite[0] = HuCSF2Write;
  MDFN_printf("Street Fighter 2 Mapper\n");
  HuCSF2Latch = 0;
 }

 return(crc);
}

int HuC_LoadCD(const char *bios_path)
{
   MDFNFILE *fp = file_open(bios_path);

   if (!fp)
   {
      if (log_cb)
         log_cb(RETRO_LOG_ERROR, "Failed to load bios!\n");
      return(0);
  }

   memset(ROMSpace, 0xFF, 262144);

   memcpy(ROMSpace, GET_FDATA_PTR(fp) + (GET_FSIZE_PTR(fp) & 512), ((GET_FSIZE_PTR(fp) & ~512) > 262144) ? 262144 : (GET_FSIZE_PTR(fp) &~ 512) );

   file_close(fp);

   PCE_IsCD = 1;
   PCE_InitCD();

   MDFN_printf(_("Arcade Card Emulation:  %s\n"), PCE_ACEnabled ? _("Enabled") : _("Disabled"));
   for(int x = 0; x < 0x40; x++)
   {
      HuCPU.FastMap[x] = &ROMSpace[x * 8192];
      HuCPU.PCERead[x] = HuCRead;
   }

   for(int x = 0x68; x < 0x88; x++)
   {
      HuCPU.FastMap[x] = &ROMSpace[x * 8192];
      HuCPU.PCERead[x] = HuCRead;
      HuCPU.PCEWrite[x] = HuCRAMWrite;
   }
   HuCPU.PCEWrite[0x80] = HuCRAMWriteCDSpecial; 	// Hyper Dyne Special hack
   MDFNMP_AddRAM(262144, 0x68 * 8192, ROMSpace + 0x68 * 8192);

   if(PCE_ACEnabled)
   {
      if (!(arcade_card = new ArcadeCard()))
      {
         MDFN_PrintError(_("Error creating %s object.\n"), "ArcadeCard");
         Cleanup();
         return(0);
      }

      for(int x = 0x40; x < 0x44; x++)
      {
         HuCPU.PCERead[x] = ACPhysRead;
         HuCPU.PCEWrite[x] = ACPhysWrite;
      }
   }

   memset(SaveRAM, 0x00, 2048);
   memcpy(SaveRAM, BRAM_Init_String, 8);	// So users don't have to manually intialize the file cabinet
   // in the CD BIOS screen.

   HuCPU.PCEWrite[0xF7] = SaveRAMWrite;
   HuCPU.PCERead[0xF7] = SaveRAMRead;
   MDFNMP_AddRAM(2048, 0xF7 * 8192, SaveRAM);
   return(1);
}

int HuC_StateAction(StateMem *sm, int load, int data_only)
{
 SFORMAT StateRegs[] =
 {
  SFARRAY(ROMSpace + 0x40 * 8192, IsPopulous ? 32768 : 0),
  SFARRAY(SaveRAM, IsPopulous ? 0 : 2048),
  SFARRAY(ROMSpace + 0x68 * 8192, PCE_IsCD ? 262144 : 0),
  SFVAR(HuCSF2Latch),
  SFEND
 };
 int ret = MDFNSS_StateAction(sm, load, data_only, StateRegs, "HuC", false);

 if(load)
  HuCSF2Latch &= 0x3;

 if(PCE_IsCD)
 {
  ret &= PCECD_StateAction(sm, load, data_only);

  if(arcade_card)
   ret &= arcade_card->StateAction(sm, load, data_only);
 }
 return(1);
}

void HuC_Kill(void)
{
   Cleanup();
}

void HuC_Power(void)
{
 if(PCE_IsCD)
  memset(ROMSpace + 0x68 * 8192, 0x00, 262144);

 if(arcade_card)
  arcade_card->Power();
}

