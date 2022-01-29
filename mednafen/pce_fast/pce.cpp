/* Mednafen - Multi-system Emulator
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

#include <retro_miscellaneous.h>
#include <file/file_path.h>
#include <zlib.h>
#include "pce.h"
#include "vdc.h"
#include "psg.h"
#include "input.h"
#include "huc.h"
#include "pcecd.h"
#include "pcecd_drive.h"
#include "../hw_misc/arcade_card/arcade_card.h"
#include "../mempatcher.h"
#include "../cdrom/cdromif.h"
#include "../mednafen-endian.h"

#ifdef _WIN32
static void sanitize_path(std::string &path)
{
   size_t size = path.size();
   for (size_t i = 0; i < size; i++)
      if (path[i] == '/')
         path[i] = '\\';
}
#endif


extern const char *retro_base_directory;

extern MDFNGI EmulatedPCE_Fast;

PCEFast_PSG *psg = NULL;
extern ArcadeCard *arcade_card; // Bah, lousy globals.

static Blip_Buffer *sbuf = NULL; //[2];

bool PCE_ACEnabled;

bool IsSGX = false;
int pce_overclocked;

// Statically allocated for speed...or something.
uint8 ROMSpace[0x88 * 8192 + 8192];	// + 8192 for PC-as-pointer safety padding

uint8 BaseRAM[32768 + 8192]; // 8KB for PCE, 32KB for Super Grafx // + 8192 for PC-as-pointer safety padding

uint8 PCEIODataBuffer;

static DECLFR(PCEBusRead)
{
 return(0xFF);
}

static DECLFW(PCENullWrite)
{
}

static DECLFR(BaseRAMReadSGX)
{
 return BaseRAM[(size_t)A - (0xF8 * 8192)];
}

static DECLFW(BaseRAMWriteSGX)
{
 BaseRAM[(size_t)A - (0xF8 * 8192)] = V;
}

static DECLFR(BaseRAMRead)
{
 return BaseRAM[(size_t)A - (0xF8 * 8192)];
}

static DECLFR(BaseRAMRead_Mirrored)
{
 return(BaseRAM[A & 0x1FFF]);
}

static DECLFW(BaseRAMWrite)
{
 BaseRAM[(size_t)A - (0xF8 * 8192)] = V;
}

static DECLFW(BaseRAMWrite_Mirrored)
{
 BaseRAM[A & 0x1FFF] = V;
}

static DECLFR(IORead)
{
 #define IOREAD_SGX 0
 #include "ioread.inc"
 #undef IOREAD_SGX
}

static DECLFR(IOReadSGX)
{
 #define IOREAD_SGX 1
 #include "ioread.inc"
 #undef IOREAD_SGX
}

static DECLFW(IOWrite)
{
 A &= 0x1FFF;

 switch(A >> 10)
 {
  case 0: HuC6280_StealCycle();
	       VDC_Write(A, V);
	       break;

  case 1: HuC6280_StealCycle();
	       VCE_Write(A, V);
	       break;

  case 2: PCEIODataBuffer = V;
	       psg->Write(HuCPU.timestamp / pce_overclocked, A, V);
	       break;

  case 3: PCEIODataBuffer = V;
	       HuC6280_TimerWrite(A, V);
	       break;

  case 4: PCEIODataBuffer = V; INPUT_Write(A, V); break;
  case 5: PCEIODataBuffer = V; HuC6280_IRQStatusWrite(A, V); break;
  case 6:
	  if(!PCE_IsCD)
	   break;

	  if((A & 0x1E00) == 0x1A00)
	  {
	   if(arcade_card)
	    arcade_card->Write(A & 0x1FFF, V);
	  }
	  else
	  {
	   PCECD_Write(HuCPU.timestamp * 3, A, V);
	  }
	  break;

  case 7: break;	// Expansion.
 }
}

static void PCECDIRQCB(bool asserted)
{
 if(asserted)
  HuC6280_IRQBegin(MDFN_IQIRQ2);
 else
  HuC6280_IRQEnd(MDFN_IQIRQ2);
}

bool PCE_InitCD(void)
{
 PCECD_Settings cd_settings;
 memset(&cd_settings, 0, sizeof(PCECD_Settings));

 cd_settings.CDDA_Volume = (double)MDFN_GetSettingUI("pce_fast.cddavolume") / 100;
 cd_settings.CD_Speed = MDFN_GetSettingUI("pce_fast.cdspeed");

 cd_settings.ADPCM_Volume = (double)MDFN_GetSettingUI("pce_fast.adpcmvolume") / 100;
 cd_settings.ADPCM_LPF = MDFN_GetSettingB("pce_fast.adpcmlp");

 return(PCECD_Init(&cd_settings, PCECDIRQCB, PCE_MASTER_CLOCK, pce_overclocked, sbuf));
}

static void LoadCommon(void);
static void LoadCommonPre(void);

static void Cleanup(void)
{
   HuC_Kill();

   VDC_Close();

   if(psg)
      delete psg;
   psg = NULL;

   if(sbuf)
      delete[] sbuf;
   sbuf = NULL;
}

static const struct
{
 uint32 crc;
 const char* name;
} sgx_table[] =
{
	{ 0xbebfe042, "Darius Plus", },
	{ 0x4c2126b0, "Aldynes" },
	{ 0x8c4588e2, "1941 - Counter Attack" },
	{ 0x1f041166, "Madouou Granzort" },
	{ 0xb486a8ed, "Daimakaimura" },
	{ 0x3b13af61, "Battle Ace" },
   { 0, NULL },
};

void Load(const uint8_t *data, size_t size, const char *ext)
{
   IsSGX = 0;

   LoadCommonPre();

   for(int x = 0; x < 0x100; x++)
   {
      HuCPU.PCERead[x] = PCEBusRead;
      HuCPU.PCEWrite[x] = PCENullWrite;
   }

   uint32 crc = HuC_Load(data, size);

   if(!strcasecmp(ext, "sgx"))
      IsSGX = true;
   // Identify sgx games by hash
   else
   {
      unsigned i = 0;
      while (sgx_table[i].crc != 0)
		{
			if(sgx_table[i].crc == crc)
			{
				IsSGX = true;
				break;
			}
         ++i;
		}
   }

   // Space Harrier (Japan)/(USA) is not compatible with SuperGrafx mode
   if (crc == 0x64580427UL || crc == 0x43b05eb8UL)
      IsSGX = false;

   if(crc == 0xfae0fc60)
      OrderOfGriffonFix = true;

   LoadCommon();
}

static void LoadCommonPre(void)
{
 HuC6280_Init();

 // FIXME:  Make these globals less global!
 pce_overclocked = MDFN_GetSettingUI("pce_fast.ocmultiplier");
 PCE_ACEnabled = MDFN_GetSettingB("pce_fast.arcadecard");

 for(int x = 0; x < 0x100; x++)
 {
  HuCPU.PCERead[x] = PCEBusRead;
  HuCPU.PCEWrite[x] = PCENullWrite;
 }

 MDFNMP_Init(1024, (1 << 21) / 1024);

 sbuf = new Blip_Buffer[2];
}

static void LoadCommon(void)
{
 IsSGX |= MDFN_GetSettingB("pce_fast.forcesgx") ? 1 : 0;

 // Don't modify IsSGX past this point.

 VDC_Init(IsSGX);
 VDC_SetSettings(MDFN_GetSettingB("pce_fast.nospritelimit"));

 if(IsSGX)
 {
  HuCPU.PCERead[0xF8] = HuCPU.PCERead[0xF9] = HuCPU.PCERead[0xFA] = HuCPU.PCERead[0xFB] = BaseRAMReadSGX;
  HuCPU.PCEWrite[0xF8] = HuCPU.PCEWrite[0xF9] = HuCPU.PCEWrite[0xFA] = HuCPU.PCEWrite[0xFB] = BaseRAMWriteSGX;

  for(int x = 0xf8; x < 0xfb; x++)
   HuCPU.FastMap[x] = &BaseRAM[(x & 0x3) * 8192];

  HuCPU.PCERead[0xFF] = IOReadSGX;
 }
 else
 {
  HuCPU.PCERead[0xF8] = BaseRAMRead;
  HuCPU.PCERead[0xF9] = HuCPU.PCERead[0xFA] = HuCPU.PCERead[0xFB] = BaseRAMRead_Mirrored;

  HuCPU.PCEWrite[0xF8] = BaseRAMWrite;
  HuCPU.PCEWrite[0xF9] = HuCPU.PCEWrite[0xFA] = HuCPU.PCEWrite[0xFB] = BaseRAMWrite_Mirrored;

  for(int x = 0xf8; x < 0xfb; x++)
   HuCPU.FastMap[x] = &BaseRAM[0];

  HuCPU.PCERead[0xFF] = IORead;
 }

 MDFNMP_AddRAM(IsSGX ? 32768 : 8192, 0xf8 * 8192, BaseRAM);

 HuCPU.PCEWrite[0xFF] = IOWrite;

 psg = new PCEFast_PSG(sbuf);

 psg->SetVolume(1.0);

 if(PCE_IsCD)
 {
  unsigned int cdpsgvolume = MDFN_GetSettingUI("pce_fast.cdpsgvolume");
  psg->SetVolume(0.678 * cdpsgvolume / 100);
 }

 PCEINPUT_Init();

 PCE_Power();

 MDFNGameInfo->fps = (uint32)((double)7159090.90909090 / 455 / 263 * 65536 * 256);
}

static bool DetectGECD(CDIF *cdiface)	// Very half-assed detection until(if) we get ISO-9660 reading code.
{
 uint8 sector_buffer[2048];
 TOC toc;

 cdiface->ReadTOC(&toc);

 // Now, test for the Games Express CD games.  The GE BIOS seems to always look at sector 0x10, but only if the first track is a
 // data track.
 if(toc.first_track == 1 && (toc.tracks[1].control & 0x4))
 {
  if(cdiface->ReadSector(sector_buffer, 0x10, 1) == 0x1)
  {
   if(!memcmp((char *)sector_buffer + 0x8, "HACKER CD ROM SYSTEM", 0x14))
    return(true);

   if(!memcmp((char *)sector_buffer + 0x01, "CD001", 0x5))
   {
    if(cdiface->ReadSector(sector_buffer, 0x14, 1) == 0x1)
    {
     static const uint32 known_crcs[] =
     {
      0xd7b47c06,	// AV Tanjou
      0x86aec522,	// Bishoujo Jyanshi [...]
      0xc8d1b5ef,	// CD Bishoujo [...]
      0x0bdbde64,	// CD Pachisuro [...]
     };
     uint32 zecrc = crc32(0, sector_buffer, 2048);

     for(unsigned int i = 0; i < sizeof(known_crcs) / sizeof(uint32); i++)
      if(known_crcs[i] == zecrc)
       return(true);
    }
   }
  }
 }

 return(false);
}

static MDFN_COLD bool TestMagicCD(std::vector<CDIF*> *CDInterfaces)
{
 static const uint8 magic_test[0x20] = { 0x82, 0xB1, 0x82, 0xCC, 0x83, 0x76, 0x83, 0x8D, 0x83, 0x4F, 0x83, 0x89, 0x83, 0x80, 0x82, 0xCC,  
				   	 0x92, 0x98, 0x8D, 0xEC, 0x8C, 0xA0, 0x82, 0xCD, 0x8A, 0x94, 0x8E, 0xAE, 0x89, 0xEF, 0x8E, 0xD0
				       };
 uint8 sector_buffer[2048];
 CDIF* cdiface = (*CDInterfaces)[0];
 TOC toc;
 bool ret = false;

 memset(sector_buffer, 0, sizeof(sector_buffer));

 cdiface->ReadTOC(&toc);

 for(int32 track = toc.first_track; track <= toc.last_track; track++)
 {
  if(toc.tracks[track].control & 0x4)
  {
   if(cdiface->ReadSector(sector_buffer, toc.tracks[track].lba, 1) != 0x1)
    break;

   if(!memcmp((char*)sector_buffer, (char *)magic_test, 0x20))
    ret = true;

   // PCE CD BIOS apparently only looks at the first data track.
   break;
  }
 }

 // If it's a PC-FX CD(Battle Heat), return false.
 // This is very kludgy.
 for(int32 track = toc.first_track; track <= toc.last_track; track++)
 {
  if(toc.tracks[track].control & 0x4)
  {
   if(cdiface->ReadSector(sector_buffer, toc.tracks[track].lba, 1) == 0x1)
   {
    if(!strncmp("PC-FX:Hu_CD-ROM", (char*)sector_buffer, strlen("PC-FX:Hu_CD-ROM")))
    {
     return false;
    }
   }
  }
 }

 if(DetectGECD(cdiface))
  ret = true;

 return(ret);
}

static MDFN_COLD bool DetectSGXCD(std::vector<CDIF*>* CDInterfaces)
{
 CDIF *cdiface = (*CDInterfaces)[0];
 TOC toc;
 uint8 sector_buffer[2048];
 bool ret = false;

 memset(sector_buffer, 0, sizeof(sector_buffer));

 cdiface->ReadTOC(&toc);

 // Check all data tracks for the 16-byte magic(4D 65 64 6E 61 66 65 6E 74 AB 90 19 42 62 7D E6) at offset 0x86A(assuming mode 1 sectors).
 for(int32 track = toc.first_track; track <= toc.last_track; track++)
 {
  if(toc.tracks[track].control & 0x4)
  {
	if(cdiface->ReadSector(sector_buffer, toc.tracks[track].lba + 1, 1) != 0x1)
	 continue;

	if(MDFN_de64msb(&sector_buffer[0x6A]) == 0x4D65646E6166656EULL && MDFN_de64msb(&sector_buffer[0x6A + 8]) == 0x74AB901942627DE6ULL)
	 ret = true;
  }
 }

 return ret;
}

int LoadCD(std::vector<CDIF *> *CDInterfaces)
{
 const char *bios_filename = MDFN_GetSettingS("pce_fast.cdbios");
 char bios_path[2048] = { 0 };

 if (MDFN_GetSettingB("sgx_detect_gexpress") && DetectGECD((*CDInterfaces)[0]))
   bios_filename = "gexpress.pce";

 fill_pathname_join(bios_path, retro_base_directory, bios_filename, sizeof(bios_path));

 if (log_cb)
  log_cb(RETRO_LOG_INFO, "Loading bios %s\n", bios_path);

 IsSGX = DetectSGXCD(CDInterfaces);

 LoadCommonPre();

 if(!HuC_LoadCD(bios_path))
  return(0);

 PCECD_Drive_SetDisc(true, NULL, true);
 PCECD_Drive_SetDisc(false, (*CDInterfaces)[0], true);

 LoadCommon();

 return 1;
}

void CloseGame(void)
{
   Cleanup();
}

void Emulate(EmulateSpecStruct *espec)
{
 INPUT_TransformInput();

 INPUT_Frame();

 MDFNMP_ApplyPeriodicCheats();

 #if 0
 {
  static bool firstcat = true;
  MDFN_PixelFormat nf;

  nf.bpp = 16;
  nf.colorspace = MDFN_COLORSPACE_RGB;
  nf.Rshift = 11;
  nf.Gshift = 5;
  nf.Bshift = 0;
  nf.Ashift = 16;

  nf.Rprec = 5;
  nf.Gprec = 6;
  nf.Bprec = 5;
  nf.Aprec = 8;

  espec->surface->SetFormat(nf, false);
  espec->VideoFormatChanged = firstcat;
  firstcat = false;
 }
 #endif

#if 0
 static bool firstcat = true;

 MDFN_PixelFormat tmp_pf;

 tmp_pf.Rshift = 0;
 tmp_pf.Gshift = 0;
 tmp_pf.Bshift = 0;
 tmp_pf.Ashift = 8;

 tmp_pf.Rprec = 0;
 tmp_pf.Gprec = 0;
 tmp_pf.Bprec = 0;
 tmp_pf.Aprec = 0;

 tmp_pf.bpp = 8;
 tmp_pf.colorspace = MDFN_COLORSPACE_RGB;

 espec->surface->SetFormat(tmp_pf, false);
 espec->VideoFormatChanged = firstcat;
 firstcat = false;
#endif

 if(espec->VideoFormatChanged)
  VDC_SetPixelFormat(espec->CustomPalette, espec->CustomPaletteNumEntries);

 if(espec->SoundFormatChanged)
 {
  for(int y = 0; y < 2; y++)
  {
   sbuf[y].set_sample_rate(espec->SoundRate ? espec->SoundRate : 44100, 50);
   sbuf[y].clock_rate((long)(PCE_MASTER_CLOCK / 3));
   sbuf[y].bass_freq(10);
  }
 }
 VDC_RunFrame(espec, false);

 if(PCE_IsCD)
 {
  PCECD_Run(HuCPU.timestamp * 3);
 }

 psg->EndFrame(HuCPU.timestamp / pce_overclocked);

 if(espec->SoundBuf)
 {
  for(int y = 0; y < 2; y++)
  {
   sbuf[y].end_frame(HuCPU.timestamp / pce_overclocked);
   espec->SoundBufSize = sbuf[y].read_samples(espec->SoundBuf + y, espec->SoundBufMaxSize, 1);
  }
 }

 espec->MasterCycles = HuCPU.timestamp * 3;

 INPUT_FixTS();

 HuC6280_ResetTS();

 if(PCE_IsCD)
  PCECD_ResetTS();
}

int StateAction(void *data, int load, int data_only)
{
 SFORMAT StateRegs[] =
 {
  SFARRAY(BaseRAM, IsSGX? 32768 : 8192),
  SFVAR(PCEIODataBuffer),
  SFEND
 };
 StateMem *sm = (StateMem*)data;

 int ret = MDFNSS_StateAction(sm, load, data_only, StateRegs, "MAIN", false);

 ret &= HuC6280_StateAction(sm, load, data_only);
 ret &= VDC_StateAction(sm, load, data_only);
 ret &= psg->StateAction(sm, load, data_only);
 ret &= INPUT_StateAction(sm, load, data_only);
 ret &= HuC_StateAction(sm, load, data_only);

 if(load)
 { }

 return(ret);
}

void PCE_Power(void)
{
 memset(BaseRAM, 0x00, sizeof(BaseRAM));

 if(!IsSGX)
  for(int i = 8192; i < 32768; i++)
   BaseRAM[i] = 0xFF;

 PCEIODataBuffer = 0xFF;

 HuC6280_Power();
 VDC_Power();
 psg->Power(HuCPU.timestamp / pce_overclocked);
 HuC_Power();

 if(PCE_IsCD)
 {
  PCECD_Power(HuCPU.timestamp * 3);
 }
}

void DoSimpleCommand(int cmd)
{
 switch(cmd)
 {
  case MDFN_MSC_RESET: PCE_Power(); break;
  case MDFN_MSC_POWER: PCE_Power(); break;
 }
}

static MDFNSetting PCESettings[] =
{
  { "pce_fast.slstart", MDFNSF_NOFLAGS, "First rendered scanline.", NULL, MDFNST_UINT, "4", "0", "239" },
  { "pce_fast.slend", MDFNSF_NOFLAGS, "Last rendered scanline.", NULL, MDFNST_UINT, "235", "0", "239" },
  { "pce_fast.mouse_sensitivity", MDFNSF_NOFLAGS, "Mouse sensitivity.", NULL, MDFNST_FLOAT, "0.50", NULL, NULL, NULL, PCEINPUT_SettingChanged },
  { "pce_fast.disable_softreset", MDFNSF_NOFLAGS, "If set, when RUN+SEL are pressed simultaneously, disable both buttons temporarily.", NULL, MDFNST_BOOL, "0", NULL, NULL, NULL, PCEINPUT_SettingChanged },
  { "pce_fast.forcesgx", MDFNSF_EMU_STATE | MDFNSF_UNTRUSTED_SAFE, "Force SuperGrafx emulation.", NULL, MDFNST_BOOL, "0" },
  { "pce_fast.arcadecard", MDFNSF_EMU_STATE | MDFNSF_UNTRUSTED_SAFE, "Enable Arcade Card emulation.", NULL, MDFNST_BOOL, "1" },
  { "pce_fast.ocmultiplier", MDFNSF_EMU_STATE | MDFNSF_UNTRUSTED_SAFE, "CPU overclock multiplier.", NULL, MDFNST_UINT, "1", "1", "100"},
  { "pce_fast.cdspeed", MDFNSF_EMU_STATE | MDFNSF_UNTRUSTED_SAFE, "CD-ROM data transfer speed multiplier", NULL, MDFNST_UINT, "1", "1", "100" },
  { "pce_fast.nospritelimit", MDFNSF_NOFLAGS, "Remove 16-sprites-per-scanline hardware limit.", NULL, MDFNST_BOOL, "0" },
  { "pce_fast.hoverscan", MDFNSF_NOFLAGS, "Reduce 352 pixels width overscan.", NULL, MDFNST_UINT, "300", "300", "352" },
  { "pce_fast.cdbios", MDFNSF_EMU_STATE, "Path to the CD BIOS", NULL, MDFNST_STRING, "syscard3.pce" },
  { "pce_fast.adpcmlp", MDFNSF_NOFLAGS, "Enable dynamic ADPCM lowpass filter.", NULL, MDFNST_BOOL, "0" },
  { "pce_fast.cdpsgvolume", MDFNSF_NOFLAGS, "PSG volume when playing a CD game.", NULL, MDFNST_UINT, "100", "0", "200" },
  { "pce_fast.cddavolume", MDFNSF_NOFLAGS, "CD-DA volume.", NULL, MDFNST_UINT, "100", "0", "200" },
  { "pce_fast.adpcmvolume", MDFNSF_NOFLAGS, "ADPCM volume.", NULL, MDFNST_UINT, "100", "0", "200" },
  { NULL }
};

uint8 MemRead(uint32 addr)
{
 return(HuCPU.PCERead[(addr / 8192) & 0xFF](addr));
}

static const FileExtensionSpecStruct KnownExtensions[] =
{
 { ".pce", "PC Engine ROM Image" },
 { ".hes", "PC Engine Music Rip" },
 { ".sgx", "SuperGrafx ROM Image" },
 { NULL, NULL }
};

MDFNGI EmulatedPCE_Fast =
{
 PCESettings,
 MDFN_MASTERCLOCK_FIXED(PCE_MASTER_CLOCK),
 0,

 true,                           // Multires possible?

 0,                              // lcm_width
 0,                              // lcm_height
 NULL,                           // Dummy

 288,                            // Nominal width
 232,                            // Nominal height

 512,                            // Framebuffer width
 242,                            // Framebuffer height

 2,                              // Number of output sound channels
};

