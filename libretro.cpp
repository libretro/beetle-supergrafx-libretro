#include <math.h>
#include <stdarg.h>

#include <libretro.h>
#include <retro_timers.h>
#include <streams/file_stream.h>

#include "mednafen/cdrom/CDUtility.h"
#include "mednafen/cdrom/cdromif.h"
#include "mednafen/general.h"
#include "mednafen/git.h"
#include "mednafen/hw_misc/arcade_card/arcade_card.h"
#include "mednafen/mednafen.h"
#include "mednafen/mempatcher.h"
#include "mednafen/settings-driver.h"
#include "mednafen/FileWrapper.h"

#include "mednafen/pce_fast/huc.h"
#include "mednafen/pce_fast/input.h"
#include "mednafen/pce_fast/pce.h"
#include "mednafen/pce_fast/pcecd.h"
#include "mednafen/pce_fast/pcecd_drive.h"
#include "mednafen/pce_fast/psg.h"
#include "mednafen/pce_fast/vdc.h"

#ifdef _MSC_VER
#include "msvc_compat.h"
#endif

#include "libretro_core_options.h"

#define MEDNAFEN_CORE_NAME_MODULE "pce_fast"
#define MEDNAFEN_CORE_NAME "Beetle SuperGrafx"
#define MEDNAFEN_CORE_VERSION "v1.23.0"
#define MEDNAFEN_CORE_EXTENSIONS "pce|sgx|cue|ccd|chd"
#define MEDNAFEN_CORE_TIMING_FPS 59.82
#define MEDNAFEN_CORE_GEOMETRY_BASE_W 512
#define MEDNAFEN_CORE_GEOMETRY_BASE_H 243
#define MEDNAFEN_CORE_GEOMETRY_MAX_W 512
#define MEDNAFEN_CORE_GEOMETRY_MAX_H 243
#define MEDNAFEN_CORE_GEOMETRY_ASPECT_RATIO (6.0 / 5.0)
#define FB_WIDTH 512
#define FB_HEIGHT 243

static bool old_cdimagecache = false;
std::string retro_base_directory;

extern MDFNGI EmulatedPCE_Fast;
MDFNGI *MDFNGameInfo = &EmulatedPCE_Fast;

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

static bool ReadM3U(std::vector<std::string> &file_list, std::string path, unsigned depth = 0)
{
   std::vector<std::string> ret;
   FileWrapper m3u_file(path.c_str(), FileWrapper::MODE_READ, _("M3U CD Set"));
   std::string dir_path;
   char linebuf[2048];
   bool result = true;

   MDFN_GetFilePathComponents(path, &dir_path);

   while (m3u_file.get_line(linebuf, sizeof(linebuf)))
   {
      std::string efp;

      if (linebuf[0] == '#')
         continue;
      MDFN_rtrim(linebuf);
      if (linebuf[0] == 0)
         continue;

      efp = MDFN_EvalFIP(dir_path, std::string(linebuf));

      if (efp.size() >= 4 && efp.substr(efp.size() - 4) == ".m3u")
      {
         if (efp == path)
         {
            log_cb(RETRO_LOG_ERROR, "M3U at \"%s\" references self.\n", efp.c_str());
            result = false;
            goto Breakout;
         }

         if (depth == 99)
         {
            log_cb(RETRO_LOG_ERROR, "M3U load recursion too deep!\n");
            result = false;
            goto Breakout;
         }

         ReadM3U(file_list, efp, depth++);
      }
      else
         file_list.push_back(efp);
   }

Breakout:
   return result;
}

static std::vector<CDIF *> CDInterfaces; // FIXME: Cleanup on error out.
// TODO: LoadCommon()

MDFNGI *MDFNI_LoadCD(const char *force_module, const char *devicename)
{
   bool ret = false;
   log_cb(RETRO_LOG_INFO, "Loading %s...\n\n", devicename);

   if (devicename && strlen(devicename) > 4 && !strcasecmp(devicename + strlen(devicename) - 4, ".m3u"))
   {
      std::vector<std::string> file_list;

      if (ReadM3U(file_list, devicename))
         ret = true;

      for (unsigned i = 0; i < file_list.size(); i++)
         CDInterfaces.push_back(CDIF_Open(file_list[i].c_str(), false, old_cdimagecache));
   }
   else
   {
      CDInterfaces.push_back(CDIF_Open(devicename, false, old_cdimagecache));
      ret = true;
   }

   if (!ret)
   {
      log_cb(RETRO_LOG_ERROR, "Error opening CD.\n");
      return NULL;
   }

   //
   // Print out a track list for all discs.
   //
   MDFN_indent(1);
   for (unsigned i = 0; i < CDInterfaces.size(); i++)
   {
      TOC toc;

      CDInterfaces[i]->ReadTOC(&toc);

      MDFN_printf(_("CD %d Layout:\n"), i + 1);
      MDFN_indent(1);

      for (int32 track = toc.first_track; track <= toc.last_track; track++)
      {
         MDFN_printf(_("Track %2d, LBA: %6d  %s\n"), track, toc.tracks[track].lba, (toc.tracks[track].control & 0x4) ? "DATA" : "AUDIO");
      }

      MDFN_printf("Leadout: %6d\n", toc.tracks[100].lba);
      MDFN_indent(-1);
      MDFN_printf("\n");
   }
   MDFN_indent(-1);

   MDFN_printf(_("Using module: supergrafx\n"));

   if (!(LoadCD(&CDInterfaces)))
   {
      for (unsigned i = 0; i < CDInterfaces.size(); i++)
         delete CDInterfaces[i];
      CDInterfaces.clear();

      MDFNGameInfo = NULL;
      return NULL;
   }

   //MDFNI_SetLayerEnableMask(~0ULL);

   MDFN_LoadGameCheats(NULL);
   MDFNMP_InstallReadPatches();

   return (MDFNGameInfo);
}

MDFNGI *MDFNI_LoadGame(const char *force_module, const char *name)
{
   MDFNFILE *GameFile = NULL;
   MDFNGameInfo       = &EmulatedPCE_Fast;

   if (strlen(name) > 4 && (!strcasecmp(name + strlen(name) - 4, ".cue") || !strcasecmp(name + strlen(name) - 4, ".chd") || !strcasecmp(name + strlen(name) - 4, ".ccd") || !strcasecmp(name + strlen(name) - 4, ".toc") || !strcasecmp(name + strlen(name) - 4, ".m3u")))
      return (MDFNI_LoadCD(force_module, name));

   GameFile = file_open(name);

   if (!GameFile)
   {
      MDFNGameInfo = NULL;
      return 0;
   }

   //
   // Load per-game settings
   //
   // Maybe we should make a "pgcfg" subdir, and automatically load all files in it?
   // End load per-game settings
   //

   Load(name, GameFile);

   MDFN_LoadGameCheats(NULL);
   MDFNMP_InstallReadPatches();

   MDFN_indent(-2);

   return (MDFNGameInfo);
}

static int curindent = 0;

void MDFN_indent(int indent)
{
   curindent += indent;
}

static uint8 lastchar = 0;

void MDFN_printf(const char *format, ...)
{
   char *format_temp;
   char *temp;
   unsigned int x, newlen;

   va_list ap;
   va_start(ap, format);

   // First, determine how large our format_temp buffer needs to be.
   uint8 lastchar_backup = lastchar; // Save lastchar!
   for (newlen = x = 0; x < strlen(format); x++)
   {
      if (lastchar == '\n' && format[x] != '\n')
      {
         int y;
         for (y = 0; y < curindent; y++)
            newlen++;
      }
      newlen++;
      lastchar = format[x];
   }

   format_temp = (char *)malloc(newlen + 1); // Length + NULL character, duh

   // Now, construct our format_temp string
   lastchar = lastchar_backup; // Restore lastchar
   for (newlen = x = 0; x < strlen(format); x++)
   {
      if (lastchar == '\n' && format[x] != '\n')
      {
         int y;
         for (y = 0; y < curindent; y++)
            format_temp[newlen++] = ' ';
      }
      format_temp[newlen++] = format[x];
      lastchar              = format[x];
   }

   format_temp[newlen] = 0;

   temp = (char *)malloc(4096 * sizeof(char));
   vsnprintf(temp, 4096, format_temp, ap);
   free(format_temp);

   MDFND_Message(temp);
   free(temp);

   va_end(ap);
}

void MDFN_PrintError(const char *format, ...)
{
   char *temp;
   va_list ap;
   va_start(ap, format);

   temp = (char *)malloc(4096 * sizeof(char));
   vsnprintf(temp, 4096, format, ap);
   MDFND_PrintError(temp);
   free(temp);

   va_end(ap);
}

void MDFN_DebugPrintReal(const char *file, const int line, const char *format, ...)
{
   char *temp;
   va_list ap;

   va_start(ap, format);
   temp = (char *)malloc(4096 * sizeof(char));
   vsnprintf(temp, 4096, format, ap);
   fprintf(stderr, "%s:%d  %s\n", file, line, temp);
   free(temp);
   va_end(ap);
}

static MDFNGI *game;

struct retro_perf_callback perf_cb;
static retro_get_cpu_features_t perf_get_cpu_features_cb = NULL;
retro_log_printf_t log_cb;
static retro_video_refresh_t video_cb;
static retro_audio_sample_t audio_cb;
static retro_audio_sample_batch_t audio_batch_cb;
static retro_environment_t environ_cb;
static retro_input_poll_t input_poll_cb;
static retro_input_state_t input_state_cb;

static double last_sound_rate;
static MDFN_PixelFormat last_pixel_format;

static MDFN_Surface *surf;

static bool failed_init;

#include "mednafen/pce_fast/pcecd.h"

static bool libretro_supports_bitmasks = false;

static void check_system_specs(void)
{
   unsigned level = 0;
   environ_cb(RETRO_ENVIRONMENT_SET_PERFORMANCE_LEVEL, &level);
}

void retro_init(void)
{
   struct retro_log_callback log;
   if (environ_cb(RETRO_ENVIRONMENT_GET_LOG_INTERFACE, &log))
      log_cb = log.log;
   else
      log_cb = NULL;

   bool achievements = true;
   environ_cb(RETRO_ENVIRONMENT_SET_SUPPORT_ACHIEVEMENTS, &achievements);

   CDUtility_Init();

   const char *dir = NULL;

   if (environ_cb(RETRO_ENVIRONMENT_GET_SYSTEM_DIRECTORY, &dir) && dir)
   {
      retro_base_directory = dir;
      // Make sure that we don't have any lingering slashes, etc, as they break Windows.
      size_t last = retro_base_directory.find_last_not_of("/\\");
      if (last != std::string::npos)
         last++;

      retro_base_directory = retro_base_directory.substr(0, last);
   }
   else
   {
      /* TODO: Add proper fallback */
      if (log_cb)
         log_cb(RETRO_LOG_WARN, "System directory is not defined. Fallback on using same dir as ROM for system directory later ...\n");
      failed_init = true;
   }

   enum retro_pixel_format rgb565 = RETRO_PIXEL_FORMAT_RGB565;
   if (environ_cb(RETRO_ENVIRONMENT_SET_PIXEL_FORMAT, &rgb565) && log_cb)
      log_cb(RETRO_LOG_INFO, "Frontend supports RGB565 - will use that instead of XRGB1555.\n");

   if (environ_cb(RETRO_ENVIRONMENT_GET_PERF_INTERFACE, &perf_cb))
      perf_get_cpu_features_cb = perf_cb.get_cpu_features;
   else
      perf_get_cpu_features_cb = NULL;

   if (environ_cb(RETRO_ENVIRONMENT_GET_INPUT_BITMASKS, NULL))
      libretro_supports_bitmasks = true;

   setting_initial_scanline = 0;
   setting_last_scanline    = 242;

   check_system_specs();
}

void retro_reset(void)
{
   DoSimpleCommand(MDFN_MSC_RESET);
}

bool retro_load_game_special(unsigned, const struct retro_game_info *, size_t)
{
   return false;
}

#define MAX_PLAYERS 5
#define MAX_BUTTONS 15

typedef union {
   uint8_t  u8[4 * sizeof(uint16_t)];
   uint16_t u16[4];
} INPUT_DATA;

static INPUT_DATA input_buf[MAX_PLAYERS] = { 0 };
static unsigned input_type[MAX_PLAYERS]  = { 0 };
static float mouse_sensitivity           = 1.0f;
static bool disable_softreset            = false;
static bool up_down_allowed              = false;

// Array to keep track of whether a given player's button is turbo
static int turbo_enable[MAX_PLAYERS][MAX_BUTTONS] = {};

// Array to keep track of each buttons turbo status
static int turbo_counter[MAX_PLAYERS][2] = {};

// The number of frames between each firing of a turbo button
static int turbo_delay;
static int turbo_toggle                                = 1;
static bool turbo_toggle_alt                           = false;
static int aspect_ratio_mode                           = 0;

static int turbo_toggle_down[MAX_PLAYERS][MAX_BUTTONS] = {};
static int AVPad6_toggle_down[MAX_PLAYERS]        = { 0 };

static void check_variables(void)
{
   struct retro_variable var = { 0 };

   var.key = "sgx_cdimagecache";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      bool cdimage_cache = true;

      if (strcmp(var.value, "enabled") == 0)
         cdimage_cache = true;
      else if (strcmp(var.value, "disabled") == 0)
         cdimage_cache = false;

      if (cdimage_cache != old_cdimagecache)
         old_cdimagecache = cdimage_cache;
   }

   var.key = "sgx_cdbios";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      if (strcmp(var.value, "System Card 3") == 0)
         setting_pce_fast_cdbios = "syscard3.pce";
      else if (strcmp(var.value, "System Card 2") == 0)
         setting_pce_fast_cdbios = "syscard2.pce";
      else if (strcmp(var.value, "System Card 1") == 0)
         setting_pce_fast_cdbios = "syscard1.pce";
      else if (strcmp(var.value, "Games Express") == 0)
         setting_pce_fast_cdbios = "gexpress.pce";
   }

   var.key = "sgx_detect_gexpress";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      if (strcmp(var.value, "disabled") == 0)
         setting_pce_fast_gexpress = false;
      else if (strcmp(var.value, "enabled") == 0)
         setting_pce_fast_gexpress = true;
   }

   var.key = "sgx_forcesgx";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      if (strcmp(var.value, "disabled") == 0)
         setting_pce_fast_forcesgx = 0;
      else if (strcmp(var.value, "enabled") == 0)
         setting_pce_fast_forcesgx = 1;
   }

   var.key = "sgx_ocmultiplier";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      setting_pce_overclocked = atoi(var.value);
   }

   var.key = "sgx_nospritelimit";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      bool newval = (strcmp(var.value, "enabled") == 0);
      if (newval != setting_pce_fast_nospritelimit)
      {
         setting_pce_fast_nospritelimit = newval;
         VDC_SetSettings(MDFN_GetSettingB("pce_fast.nospritelimit"));
      }
   }

   var.key = "sgx_hoverscan";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      setting_pce_hoverscan = atoi(var.value);
   }

   var.key = "sgx_initial_scanline";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      setting_initial_scanline = atoi(var.value);
   }

   var.key = "sgx_last_scanline";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      setting_last_scanline = atoi(var.value);
   }

   bool do_cdsettings = false;
   var.key            = "sgx_cddavolume";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      int newval = atoi(var.value);
      if (setting_pce_fast_cddavolume != newval)
      {
         do_cdsettings               = true;
         setting_pce_fast_cddavolume = newval;
      }
   }

   var.key = "sgx_adpcmvolume";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      int newval = atoi(var.value);
      if (setting_pce_fast_adpcmvolume != newval)
      {
         do_cdsettings                = true;
         setting_pce_fast_adpcmvolume = newval;
      }
   }

   var.key = "sgx_cdpsgvolume";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      int newval = atoi(var.value);
      if (setting_pce_fast_cdpsgvolume != newval)
      {
         do_cdsettings                = true;
         setting_pce_fast_cdpsgvolume = newval;
      }
   }

   var.key = "sgx_cdspeed";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      int newval = atoi(var.value);
      if (setting_pce_fast_cdspeed != newval)
      {
         do_cdsettings            = true;
         setting_pce_fast_cdspeed = newval;
      }
   }

   if (PCE_IsCD && do_cdsettings)
   {
      PCECD_Settings settings = { 0 };
      settings.CDDA_Volume    = (double)setting_pce_fast_cddavolume / 100;
      settings.CD_Speed       = setting_pce_fast_cdspeed;
      settings.ADPCM_Volume   = (double)setting_pce_fast_adpcmvolume / 100;
      PCECD_SetSettings(&settings);

      psg->SetVolume(0.678 * setting_pce_fast_cdpsgvolume / 100);
      log_cb(RETRO_LOG_INFO, "PCE CD Audio settings changed.\n");
   }

   var.key = "sgx_turbo_toggle";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      int oldval = turbo_toggle;
      if (strcmp(var.value, "switch") == 0)
         turbo_toggle = 1;
      else if (strcmp(var.value, "dedicated") == 0)
         turbo_toggle = 2;
      else
         turbo_toggle = 0;
      if (turbo_toggle != oldval)
      {
         for (unsigned i = 0; i < MAX_PLAYERS; i++)
         {
            turbo_enable[i][0] = 0;
            turbo_enable[i][1] = 0;
         }
      }
   }

   var.key = "sgx_turbo_delay";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      turbo_delay = atoi(var.value);
   }

   var.key = "sgx_aspect_ratio";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      if (strcmp(var.value, "auto") == 0)
         aspect_ratio_mode = 0;
      else if (strcmp(var.value, "6:5") == 0)
         aspect_ratio_mode = 1;
      else if (strcmp(var.value, "4:3") == 0)
         aspect_ratio_mode = 2;
   }

   var.key = "sgx_turbo_toggle_hotkey";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      if (strcmp(var.value, "enabled") == 0)
         turbo_toggle_alt = true;
      else
         turbo_toggle_alt = false;
   }

   var.key = "sgx_mouse_sensitivity";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      mouse_sensitivity = atof(var.value);
   }

   var.key = "sgx_disable_softreset";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      disable_softreset = (strcmp(var.value, "enabled") == 0);
   }

   var.key = "sgx_up_down_allowed";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      up_down_allowed = (strcmp(var.value, "enabled") == 0);
   }
}

#define PAGESIZE 8192

static void setup_retro_memory_maps()
{
   struct retro_memory_descriptor descs[8];
   struct retro_memory_map        mmaps;
   int i = 0;

   memset(descs, 0, sizeof(descs));

   descs[i].ptr    = (uint8_t*)BaseRAM;
   descs[i].start  = 0xf8 * PAGESIZE;
   descs[i].len    = (IsSGX ? 4 : 1) * PAGESIZE;
   i++;

   if (IsPopulous)
   {
      descs[i].ptr    = (uint8_t*)(ROMSpace + 0x40 * PAGESIZE);
      descs[i].start  = 0x40 * PAGESIZE;
      descs[i].len    = 4 * PAGESIZE;
      i++;
   }
   else
   {
      descs[i].ptr    = (uint8_t*)SaveRAM;
      descs[i].start  = 0xf7 * PAGESIZE;
      descs[i].len    = 2048;
      i++;
   }

   if (PCE_IsCD)
   {
      // Super System Card RAM
      descs[i].ptr    = (uint8_t*)(ROMSpace + 0x68 * PAGESIZE);
      descs[i].start  = 0x68 * PAGESIZE;
      descs[i].len    = 24 * PAGESIZE;
      descs[i].select = 0xFFFD0000;
      i++;

      // CD RAM
      descs[i].ptr    = (uint8_t*)(ROMSpace + 0x80 * PAGESIZE);
      descs[i].start  = 0x80 * PAGESIZE;
      descs[i].len    = 8 * PAGESIZE;
      i++;
   }

   mmaps.descriptors = descs;
   mmaps.num_descriptors = i;
   environ_cb(RETRO_ENVIRONMENT_SET_MEMORY_MAPS, &mmaps);
}

bool retro_load_game(const struct retro_game_info *info)
{
   if (!info || failed_init)
      return false;

   struct retro_input_descriptor desc[] = {
      { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_LEFT, "D-Pad Left" },
      { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_UP, "D-Pad Up" },
      { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_DOWN, "D-Pad Down" },
      { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_RIGHT, "D-Pad Right" },
      { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_B, "II" },
      { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_A, "I" },
      { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_X, "IV" },
      { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_Y, "III" },
      { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_L, "V" },
      { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_R, "VI" },
      { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_L2, "Mode Switch" },
      { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_SELECT, "Select" },
      { 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_START, "Run" },

      { 1, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_LEFT, "D-Pad Left" },
      { 1, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_UP, "D-Pad Up" },
      { 1, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_DOWN, "D-Pad Down" },
      { 1, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_RIGHT, "D-Pad Right" },
      { 1, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_B, "II" },
      { 1, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_A, "I" },
      { 1, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_X, "IV" },
      { 1, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_Y, "III" },
      { 1, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_L, "V" },
      { 1, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_R, "VI" },
      { 1, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_L2, "Mode Switch" },
      { 1, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_SELECT, "Select" },
      { 1, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_START, "Run" },

      { 2, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_LEFT, "D-Pad Left" },
      { 2, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_UP, "D-Pad Up" },
      { 2, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_DOWN, "D-Pad Down" },
      { 2, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_RIGHT, "D-Pad Right" },
      { 2, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_B, "II" },
      { 2, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_A, "I" },
      { 2, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_X, "IV" },
      { 2, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_Y, "III" },
      { 2, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_L, "V" },
      { 2, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_R, "VI" },
      { 2, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_L2, "Mode Switch" },
      { 2, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_SELECT, "Select" },
      { 2, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_START, "Run" },

      { 3, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_LEFT, "D-Pad Left" },
      { 3, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_UP, "D-Pad Up" },
      { 3, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_DOWN, "D-Pad Down" },
      { 3, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_RIGHT, "D-Pad Right" },
      { 3, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_B, "II" },
      { 3, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_A, "I" },
      { 3, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_X, "IV" },
      { 3, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_Y, "III" },
      { 3, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_L, "V" },
      { 3, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_R, "VI" },
      { 3, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_L2, "Mode Switch" },
      { 3, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_SELECT, "Select" },
      { 3, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_START, "Run" },

      { 4, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_LEFT, "D-Pad Left" },
      { 4, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_UP, "D-Pad Up" },
      { 4, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_DOWN, "D-Pad Down" },
      { 4, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_RIGHT, "D-Pad Right" },
      { 4, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_B, "II" },
      { 4, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_A, "I" },
      { 4, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_X, "IV" },
      { 4, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_Y, "III" },
      { 4, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_L, "V" },
      { 4, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_R, "VI" },
      { 4, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_L2, "Mode Switch" },
      { 4, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_SELECT, "Select" },
      { 4, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_START, "Run" },

      { 0 },
   };

   environ_cb(RETRO_ENVIRONMENT_SET_INPUT_DESCRIPTORS, desc);

   check_variables();

   game = MDFNI_LoadGame(MEDNAFEN_CORE_NAME_MODULE, info->path);
   if (!game)
      return false;

   MDFN_PixelFormat pix_fmt(MDFN_COLORSPACE_RGB, 16, 8, 0, 13);
   memset(&last_pixel_format, 0, sizeof(MDFN_PixelFormat));

   surf = new MDFN_Surface(NULL, FB_WIDTH, FB_HEIGHT, FB_WIDTH, pix_fmt);

   // Possible endian bug ...
   for (unsigned i = 0; i < MAX_PLAYERS; i++)
   {
      PCEINPUT_SetInput(i, "gamepad", (uint8*)&input_buf[i]);
      input_type[i] = RETRO_DEVICE_JOYPAD;
   }

   setup_retro_memory_maps();

   return game;
}

void retro_unload_game(void)
{
   if (!MDFNGameInfo)
      return;

   MDFN_FlushGameCheats(0);

   CloseGame();

   MDFNMP_Kill();

   MDFNGameInfo = NULL;

   for (unsigned i = 0; i < CDInterfaces.size(); i++)
      delete CDInterfaces[i];
   CDInterfaces.clear();
}

#define BIT(x)     (1 << (x))

// 1st u8 bits
#define JOY_I      BIT(0)
#define JOY_II     BIT(1)
#define JOY_SELECT BIT(2)
#define JOY_RUN    BIT(3)
#define JOY_UP     BIT(4)
#define JOY_RIGHT  BIT(5)
#define JOY_DOWN   BIT(6)
#define JOY_LEFT   BIT(7)
// 2nd u8 bits
#define JOY_III    BIT(8)  >> 8
#define JOY_IV     BIT(9)  >> 8
#define JOY_V      BIT(10) >> 8
#define JOY_VI     BIT(11) >> 8
#define JOY_MODE   BIT(12) >> 8

static unsigned turbo_map_layout[2][2] = {
   { RETRO_DEVICE_ID_JOYPAD_X, RETRO_DEVICE_ID_JOYPAD_Y },
   { RETRO_DEVICE_ID_JOYPAD_R3, RETRO_DEVICE_ID_JOYPAD_L3 }
};

static unsigned map[] = {
   RETRO_DEVICE_ID_JOYPAD_A,
   RETRO_DEVICE_ID_JOYPAD_B,
   RETRO_DEVICE_ID_JOYPAD_SELECT,
   RETRO_DEVICE_ID_JOYPAD_START,
   RETRO_DEVICE_ID_JOYPAD_UP,
   RETRO_DEVICE_ID_JOYPAD_RIGHT,
   RETRO_DEVICE_ID_JOYPAD_DOWN,
   RETRO_DEVICE_ID_JOYPAD_LEFT,
   RETRO_DEVICE_ID_JOYPAD_Y,
   RETRO_DEVICE_ID_JOYPAD_X,
   RETRO_DEVICE_ID_JOYPAD_L,
   RETRO_DEVICE_ID_JOYPAD_R,
   RETRO_DEVICE_ID_JOYPAD_L2,
   RETRO_DEVICE_ID_JOYPAD_L3,
   RETRO_DEVICE_ID_JOYPAD_R3
};

static void update_input_turbo(int port, INPUT_DATA *input_state, uint16_t input_data)
{
   unsigned *turbo_map = turbo_map_layout[turbo_toggle_alt];

   // We only care about JOY_I and JOY_II (bit0 and bit 1)
   for (unsigned i = 0; i < 2; i++)
   {
      // Check whether a given button is turbo-enabled
      if (turbo_enable[port][i] == 1)
      {
         int which = 0;

         if (turbo_toggle == 1)
            which = map[i];
         else if (turbo_toggle == 2)
            which = turbo_map_layout[0][i];

         if (input_data & BIT(which)) // retropad to pce_joypad
         {
            // Turbo buttons only fire when their counter is zero or 1
            // FIXME: In some games, the buttons requires more frames held for specific action to react
            // e.g. an Attack button can react in just 1 frame while a Jump needs to have the buttons
            // held for 3 frames before it can be registered as a "Jump" action
            if (turbo_counter[port][i] < 2)
               input_state->u8[0] |= (JOY_I + i);
            else
               input_state->u8[0] &= ~(JOY_I + i);
            if (++turbo_counter[port][i] > turbo_delay) {
               input_state->u8[0] |= (JOY_I + i);
               turbo_counter[port][i] = 0;
            }
         }
         else
            turbo_counter[port][i] = 0;
      }

      // turbo mode
      {
         static int last_mode;
         static bool changed;

         if (last_mode != turbo_toggle)
         {
            last_mode = turbo_toggle;
            changed = true;
         }

         // switch
         if (turbo_toggle == 1)
         {
            if (input_data & BIT(turbo_map[i]))
            {
               if (turbo_toggle_down[port][i] == 0)
               {
                  turbo_toggle_down[port][i] ^= 1;
                  turbo_enable[port][i] ^= 1;
                  MDFN_DispMessage("Pad %i Button %s Turbo %s", port + 1,
                      i ? "II" : "I", turbo_enable[port][i] ? "ON" : "OFF");
               }
            }
            else
               turbo_toggle_down[port][i] = 0;
         }

         // dedicated turbo buttons
         else if (turbo_toggle == 2 && changed)
         {
            turbo_enable[port][0] = 1;
            turbo_enable[port][1] = 1;
            changed = false;
         }
      }
   }
}

static void update_input(void)
{
   for (unsigned j = 0; j < MAX_PLAYERS; j++)
   {
      INPUT_DATA *input_state = &(input_buf[j]);

      switch (input_type[j])
      {
      case RETRO_DEVICE_JOYPAD:
      {
         uint16_t ret = 0;

         if (libretro_supports_bitmasks)
         {
            // read all buttons using input bitmasks
            ret = input_state_cb(j, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_MASK);
         }
         else
         {
            // read all buttons using standard way
            for (unsigned id = RETRO_DEVICE_ID_JOYPAD_B; id < (1 + RETRO_DEVICE_ID_JOYPAD_R3); id++)
               ret |= input_state_cb(j, RETRO_DEVICE_JOYPAD, 0, id) ? BIT(id) : 0;
         }

         input_state->u8[0] = 0;
         input_state->u8[1] = 0;

         // process normal buttons
         if (ret & BIT(RETRO_DEVICE_ID_JOYPAD_A))
            input_state->u8[0] |= JOY_I;
         if (ret & BIT(RETRO_DEVICE_ID_JOYPAD_B))
            input_state->u8[0] |= JOY_II;
         if (ret & BIT(RETRO_DEVICE_ID_JOYPAD_SELECT))
            input_state->u8[0] |= JOY_SELECT;
         if (ret & BIT(RETRO_DEVICE_ID_JOYPAD_START))
            input_state->u8[0] |= JOY_RUN;
         if (ret & BIT(RETRO_DEVICE_ID_JOYPAD_UP))
            input_state->u8[0] |= JOY_UP;
         if (ret & BIT(RETRO_DEVICE_ID_JOYPAD_RIGHT))
            input_state->u8[0] |= JOY_RIGHT;
         if (ret & BIT(RETRO_DEVICE_ID_JOYPAD_DOWN))
            input_state->u8[0] |= JOY_DOWN;
         if (ret & BIT(RETRO_DEVICE_ID_JOYPAD_LEFT))
            input_state->u8[0] |= JOY_LEFT;
         if (ret & BIT(RETRO_DEVICE_ID_JOYPAD_Y))
            input_state->u8[1] |= JOY_III;
         if (ret & BIT(RETRO_DEVICE_ID_JOYPAD_X))
            input_state->u8[1] |= JOY_IV;
         if (ret & BIT(RETRO_DEVICE_ID_JOYPAD_L))
            input_state->u8[1] |= JOY_V;
         if (ret & BIT(RETRO_DEVICE_ID_JOYPAD_R))
            input_state->u8[1] |= JOY_VI;
         input_buf->u8[1] |= AVPad6Enabled[j] ? JOY_MODE : 0;

         // process turbo buttons only when in 2-button mode
         if (turbo_toggle != 0 && !AVPad6Enabled[j])
            update_input_turbo(j, input_state, ret);

         // 2/6 buttom mode switching
         if (ret & BIT(RETRO_DEVICE_ID_JOYPAD_L2))
         {
            if (AVPad6_toggle_down[j] == 0)
            {
               AVPad6_toggle_down[j] = !AVPad6_toggle_down[j];
               AVPad6Enabled[j] = !AVPad6Enabled[j];
               MDFN_DispMessage("%d-button mode selected for pad %d", AVPad6Enabled[j] ? 6 : 2, j + 1);
            }            
         }
         else
            AVPad6_toggle_down[j] = 0;

         if (disable_softreset == true)
         {
            if ((input_state->u8[0] & 0xC) == 0xC)
               input_state->u8[0] &= ~0xC;
         }

         if (up_down_allowed == false)
         {
            if ((input_state->u8[0] & 0x50) == 0x50)
               input_state->u8[0] &= ~0x50;

            if ((input_state->u8[0] & 0xA0) == 0xA0)
               input_state->u8[0] &= ~0xA0;
         }
      } break;

      case RETRO_DEVICE_MOUSE:
      {
         int mouse_x = input_state_cb(j, RETRO_DEVICE_MOUSE, 0, RETRO_DEVICE_ID_MOUSE_X);
         int mouse_y = input_state_cb(j, RETRO_DEVICE_MOUSE, 0, RETRO_DEVICE_ID_MOUSE_Y);

         input_state->u16[0] = (int)roundf(mouse_x * mouse_sensitivity);
         input_state->u16[1] = (int)roundf(mouse_y * mouse_sensitivity);

         input_state->u16[2] = 0;

         // left mouse button
         if (input_state_cb(j, RETRO_DEVICE_MOUSE, 0, RETRO_DEVICE_ID_MOUSE_LEFT))
            input_state->u16[2] |= BIT(0);

         // right mouse button
         if (input_state_cb(j, RETRO_DEVICE_MOUSE, 0, RETRO_DEVICE_ID_MOUSE_RIGHT))
            input_state->u16[2] |= BIT(1);

         // select
         if (input_state_cb(j, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_SELECT))
            input_state->u16[2] |= BIT(2);

         // start
         if (input_state_cb(j, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_START) ||
             input_state_cb(j, RETRO_DEVICE_MOUSE, 0, RETRO_DEVICE_ID_MOUSE_MIDDLE))
            input_state->u16[2] |= BIT(3);
      } break;

      default:
         input_state->u16[0] = 0;
         break;
      }
   }
}

static float get_aspect_ratio(unsigned width, unsigned height)
{
   float par                  = 0.0f;
   float exact_par_per_freq[] = { 8.0f / 7.0f, 6.0f / 7.0f, 4.0f / 7.0f };

   if (aspect_ratio_mode == 1) // 6:5 DAR
      return (6.0f / 5.0f);
   else if (aspect_ratio_mode == 2) // 4:3 DAR
      return (4.0f / 3.0f);

   /* 0: 5.37 MHz		1.14	8:7
    * 1: 7.16 MHz		0.86	6:7
    * 2: 10.74 MHz		0.57	4:7
    */
   par = exact_par_per_freq[vce.dot_clock];

   // Hack to force game to use mode 1 settings
   if (OrderOfGriffonFix)
      par = exact_par_per_freq[1];

   return (float)width * par / (float)height;
}

void update_geometry(unsigned width, unsigned height)
{
   struct retro_system_av_info system_av_info;
   system_av_info.geometry.base_width   = width;
   system_av_info.geometry.base_height  = height;
   system_av_info.geometry.max_width    = MEDNAFEN_CORE_GEOMETRY_MAX_W;
   system_av_info.geometry.max_height   = MEDNAFEN_CORE_GEOMETRY_MAX_H;
   system_av_info.geometry.aspect_ratio = get_aspect_ratio(width, height);
   environ_cb(RETRO_ENVIRONMENT_SET_GEOMETRY, &system_av_info);
}

void retro_run(void)
{
   bool updated            = false;
   bool resolution_changed = false;
   static int16_t sound_buf[0x10000];
   static int32_t rects[FB_HEIGHT];
   static unsigned width, height;

   MDFNGI *curgame = (MDFNGI *)game;

   input_poll_cb();

   update_input();

   rects[0] = ~0;

   EmulateSpecStruct spec  = { 0 };
   spec.surface            = surf;
   spec.SoundRate          = 44100;
   spec.SoundBuf           = sound_buf;
   spec.LineWidths         = rects;
   spec.SoundBufMaxSize    = sizeof(sound_buf) / 2;
   spec.SoundVolume        = 1.0;
   spec.soundmultiplier    = 1.0;
   spec.SoundBufSize       = 0;
   spec.VideoFormatChanged = false;
   spec.SoundFormatChanged = false;

   if (memcmp(&last_pixel_format, &spec.surface->format, sizeof(MDFN_PixelFormat)))
   {
      spec.VideoFormatChanged = TRUE;
      last_pixel_format       = spec.surface->format;
   }

   if (spec.SoundRate != last_sound_rate)
   {
      spec.SoundFormatChanged = true;
      last_sound_rate         = spec.SoundRate;
   }

   Emulate(&spec);

   if (width != spec.DisplayRect.w || height != spec.DisplayRect.h)
      resolution_changed = true;

   width  = spec.DisplayRect.w;
   height = spec.DisplayRect.h;

   video_cb(surf->pixels16 + surf->pitchinpix * spec.DisplayRect.y, width, height, FB_WIDTH << 1);

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE_UPDATE, &updated) && updated)
      check_variables();

   if (resolution_changed)
      update_geometry(width, height);

   audio_batch_cb(spec.SoundBuf, spec.SoundBufSize);
}

void retro_get_system_info(struct retro_system_info *info)
{
#ifndef GIT_VERSION
#define GIT_VERSION ""
#endif

   memset(info, 0, sizeof(*info));
   info->library_name     = MEDNAFEN_CORE_NAME;
   info->library_version  = MEDNAFEN_CORE_VERSION GIT_VERSION;
   info->need_fullpath    = true;
   info->valid_extensions = MEDNAFEN_CORE_EXTENSIONS;
   info->block_extract    = false;
}

void retro_get_system_av_info(struct retro_system_av_info *info)
{
   unsigned width     = MEDNAFEN_CORE_GEOMETRY_BASE_W;
   unsigned height    = setting_last_scanline - setting_initial_scanline + 1;
   float aspect_ratio = MEDNAFEN_CORE_GEOMETRY_ASPECT_RATIO;

   memset(info, 0, sizeof(*info));

   if (aspect_ratio_mode == 0) // auto aspect
   {
      width        = 352;
      aspect_ratio = width * (6.0 / 7.0) / height;
   }
   else if (aspect_ratio_mode == 2) // 4:3
   {
      width        = 320;
      aspect_ratio = 4.0 / 3.0;
   }

   info->timing.fps            = MEDNAFEN_CORE_TIMING_FPS;
   info->timing.sample_rate    = 44100.0;
   info->geometry.base_width   = width;
   info->geometry.base_height  = height;
   info->geometry.max_width    = MEDNAFEN_CORE_GEOMETRY_MAX_W;
   info->geometry.max_height   = MEDNAFEN_CORE_GEOMETRY_MAX_H;
   info->geometry.aspect_ratio = aspect_ratio;
}

void retro_deinit()
{
   if (surf)
      delete surf;
   surf = NULL;
   libretro_supports_bitmasks = false;
}

unsigned retro_get_region(void)
{
   return RETRO_REGION_NTSC; // FIXME: Regions for other cores.
}

unsigned retro_api_version(void)
{
   return RETRO_API_VERSION;
}

void retro_set_controller_port_device(unsigned in_port, unsigned device)
{
   if (in_port < MAX_PLAYERS)
   {
      input_type[in_port] = device;

      switch (device)
      {
      case RETRO_DEVICE_JOYPAD:
         PCEINPUT_SetInput(in_port, "gamepad", (uint8*)&input_buf[in_port]);
         MDFN_printf("Player %u: gamepad\n", in_port + 1);
         break;
      case RETRO_DEVICE_MOUSE:
         PCEINPUT_SetInput(in_port, "mouse", (uint8*)&input_buf[in_port]);
         MDFN_printf("Player %u: mouse\n", in_port + 1);
         break;
      case RETRO_DEVICE_NONE:
         // Do not re-init to "none" as some games tend to behave differently
         // e.g. Motoroader - cannot change speed during the course preview
         // PCEINPUT_SetInput(in_port, "none", &input_buf[in_port][0]);
         MDFN_printf("Player %u: None\n", in_port + 1);
         break;
      }
   }
}

void retro_set_environment(retro_environment_t cb)
{
   struct retro_vfs_interface_info vfs_iface_info;
   environ_cb = cb;

   static const struct retro_controller_description pads[] = {
      { "PCE Joypad", RETRO_DEVICE_JOYPAD },
      { "PCE Mouse", RETRO_DEVICE_MOUSE },
      { "None", RETRO_DEVICE_NONE },
      { NULL, 0 },
   };

   static const struct retro_controller_info ports[] = {
      { pads, 3 },
      { pads, 3 },
      { pads, 3 },
      { pads, 3 },
      { pads, 3 },
      { NULL, 0 },
   };

   libretro_set_core_options(cb);
   environ_cb(RETRO_ENVIRONMENT_SET_CONTROLLER_INFO, (void *)ports);

   vfs_iface_info.required_interface_version = 1;
   vfs_iface_info.iface                      = NULL;
   if (environ_cb(RETRO_ENVIRONMENT_GET_VFS_INTERFACE, &vfs_iface_info))
      filestream_vfs_init(&vfs_iface_info);
}

void retro_set_audio_sample(retro_audio_sample_t cb)
{
   audio_cb = cb;
}

void retro_set_audio_sample_batch(retro_audio_sample_batch_t cb)
{
   audio_batch_cb = cb;
}

void retro_set_input_poll(retro_input_poll_t cb)
{
   input_poll_cb = cb;
}

void retro_set_input_state(retro_input_state_t cb)
{
   input_state_cb = cb;
}

void retro_set_video_refresh(retro_video_refresh_t cb)
{
   video_cb = cb;
}

static size_t serialize_size;

size_t retro_serialize_size(void)
{
   int runahead = -1;
   StateMem st;

   st.data           = NULL;
   st.loc            = 0;
   st.len            = 0;
   st.malloced       = 0;
   st.initial_malloc = 0;

   if (!MDFNSS_SaveSM(&st, 0, 0, NULL, NULL, NULL))
      return 0;

   free(st.data);

   serialize_size = st.len;

   if (environ_cb(RETRO_ENVIRONMENT_GET_AUDIO_VIDEO_ENABLE, &runahead))
   {
      // Use Fast Savestates
      if (runahead & 4)
         // allocate more memory for arcade card + future expansion (2MB + 512KB)
         // this only affects size of memory usage and not actual savestate file
         serialize_size += 0x280000;
   }

   return serialize_size;
}

bool retro_serialize(void *data, size_t size)
{
   StateMem st;
   bool ret      = false;
   uint8_t *_dat = (uint8_t *)malloc(size);

   if (!_dat)
      return false;

   /* Mednafen can realloc the buffer so we need to ensure this is safe. */
   st.data           = _dat;
   st.loc            = 0;
   st.len            = 0;
   st.malloced       = size;
   st.initial_malloc = 0;

   ret = MDFNSS_SaveSM(&st, 0, 0, NULL, NULL, NULL);

   memcpy(data, st.data, size);
   free(st.data);

   return ret;
}

bool retro_unserialize(const void *data, size_t size)
{
   StateMem st;

   st.data           = (uint8_t *)data;
   st.loc            = 0;
   st.len            = size;
   st.malloced       = 0;
   st.initial_malloc = 0;

   return MDFNSS_LoadSM(&st, 0, 0);
}

void *retro_get_memory_data(unsigned type)
{
   uint8_t *data;

   switch (type)
   {
   case RETRO_MEMORY_SYSTEM_RAM:
      data = BaseRAM;
      break;
   case RETRO_MEMORY_SAVE_RAM:
      if (IsPopulous)
         data = (uint8_t *)(ROMSpace + 0x40 * 8192);
      else
         data = (uint8_t *)SaveRAM;
      break;
   default:
      data = NULL;
      break;
   }
   return data;
}

size_t retro_get_memory_size(unsigned type)
{
   unsigned size;

   switch (type)
   {
   case RETRO_MEMORY_SYSTEM_RAM:
      size = IsSGX ? 32768 : 8192;
      break;
   case RETRO_MEMORY_SAVE_RAM:
      if (IsPopulous)
         size = 32768;
      else
         size = 2048;
      break;
   default:
      size = 0;
      break;
   }

   return size;
}

void retro_cheat_reset(void)
{
}

void retro_cheat_set(unsigned, bool, const char *)
{
}

void MDFND_Message(const char *str)
{
   if (log_cb)
      log_cb(RETRO_LOG_INFO, "%s", str);
}

void MDFND_MidSync(const EmulateSpecStruct *)
{
}

void MDFN_MidLineUpdate(EmulateSpecStruct *espec, int y)
{
   //MDFND_MidLineUpdate(espec, y);
}

void MDFND_PrintError(const char *err)
{
   if (log_cb)
      log_cb(RETRO_LOG_ERROR, "%s\n", err);
}

void MDFND_Sleep(unsigned int time)
{
   retro_sleep(time);
}

/* forward declarations */
extern void MDFND_DispMessage(unsigned char *str);

void MDFND_DispMessage(unsigned char *str)
{
   const char *strc         = (const char *)str;
   struct retro_message msg = {
      strc,
      180
   };

   environ_cb(RETRO_ENVIRONMENT_SET_MESSAGE, &msg);
}

void MDFN_DispMessage(const char *format, ...)
{
   struct retro_message msg;
   va_list ap;
   char *str        = (char *)malloc(4096 * sizeof(char *));
   const char *strc = NULL;

   va_start(ap, format);
   vsnprintf(str, 4096, format, ap);
   va_end(ap);
   strc = str;

   msg.frames = 180;
   msg.msg    = strc;

   environ_cb(RETRO_ENVIRONMENT_SET_MESSAGE, &msg);
   free(str);
}

void MDFN_ResetMessages(void)
{
}
