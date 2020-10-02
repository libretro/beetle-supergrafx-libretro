#ifndef _PCE_H
#define _PCE_H

#include <vector>

#include "../mednafen-types.h"
#include "../mednafen.h"
#include "../state.h"
#include "../general.h"
#include "psg.h"

#define PCE_MASTER_CLOCK        21477272.727273

#define DECLFR(x) uint8 MDFN_FASTCALL x (uint32 A)
#define DECLFW(x) void MDFN_FASTCALL x (uint32 A, uint8 V)

extern uint8 ROMSpace[0x88 * 8192 + 8192];

typedef void (MDFN_FASTCALL *writefunc)(uint32 A, uint8 V);
typedef uint8 (MDFN_FASTCALL *readfunc)(uint32 A);

extern uint8 PCEIODataBuffer;

bool PCE_InitCD(void) MDFN_COLD;

#include "huc6280.h"

extern bool PCE_ACEnabled; // Arcade Card emulation enabled?
void PCE_Power(void) MDFN_COLD;

extern int pce_overclocked;

extern uint8 BaseRAM[32768 + 8192];
extern bool PCE_IsCD;

int LoadCD(std::vector<CDIF *> *CDInterfaces);
void Load(const char *name, MDFNFILE *fp);
void DoSimpleCommand(int cmd);
void CloseGame(void);
void Emulate(EmulateSpecStruct *espec);

extern PCEFast_PSG *psg;
extern bool IsSGX;

extern uint8 ROMSpace[0x88 * 8192 + 8192];
extern uint8 BaseRAM[32768 + 8192];

#endif
