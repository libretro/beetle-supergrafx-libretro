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
static bool use_palette = false;
std::string retro_base_directory;

extern MDFNGI EmulatedPCE_Fast;
MDFNGI *MDFNGameInfo = &EmulatedPCE_Fast;

/* Composite palette 2020/09/14
 * authors: Dshadoff, Turboxray, Furrtek, Kitrinx and others
 */
static uint8_t composite_palette[] = {
   0, 0, 0, 
   0, 0, 27, 
   1, 2, 61, 
   0, 0, 88, 
   1, 4, 123, 
   0, 0, 149, 
   2, 5, 184, 
   0, 2, 211, 
   28, 0, 4, 
   32, 4, 39, 
   29, 1, 65, 
   33, 6, 100, 
   29, 2, 127, 
   34, 7, 162, 
   30, 4, 188, 
   34, 9, 223, 
   64, 6, 16, 
   60, 3, 43, 
   65, 8, 78, 
   61, 5, 104, 
   66, 10, 139, 
   62, 6, 166, 
   66, 11, 200, 
   62, 8, 227, 
   92, 5, 20, 
   88, 2, 47, 
   93, 7, 82, 
   89, 4, 108, 
   94, 9, 143, 
   90, 5, 170, 
   94, 10, 205, 
   90, 7, 231, 
   120, 4, 25, 
   125, 9, 59, 
   121, 6, 86, 
   125, 11, 121, 
   122, 8, 147, 
   126, 13, 182, 
   122, 9, 209, 
   127, 14, 243, 
   156, 11, 37, 
   153, 8, 63, 
   157, 13, 98, 
   153, 10, 125, 
   158, 15, 160, 
   154, 12, 186, 
   158, 17, 221, 
   155, 13, 247, 
   184, 10, 41, 
   181, 7, 68, 
   185, 12, 102, 
   181, 9, 129, 
   186, 14, 164, 
   182, 10, 190, 
   186, 15, 225, 
   183, 12, 252, 
   212, 9, 45, 
   217, 14, 80, 
   213, 11, 106, 
   218, 16, 141, 
   214, 13, 168, 
   218, 18, 203, 
   214, 14, 229, 
   219, 19, 255, 
   9, 37, 2, 
   5, 34, 29, 
   9, 39, 64, 
   6, 36, 90, 
   10, 41, 125, 
   6, 37, 152, 
   11, 42, 186, 
   7, 39, 213, 
   37, 36, 6, 
   33, 33, 33, 
   37, 38, 68, 
   34, 35, 94, 
   38, 40, 129, 
   34, 36, 156, 
   39, 41, 190, 
   35, 38, 217, 
   65, 35, 10, 
   69, 40, 45, 
   65, 37, 72, 
   70, 42, 107, 
   66, 39, 133, 
   70, 44, 168, 
   67, 40, 194, 
   71, 45, 229, 
   101, 42, 23, 
   97, 39, 49, 
   102, 44, 84, 
   98, 41, 111, 
   102, 46, 145, 
   98, 43, 172, 
   103, 48, 207, 
   99, 44, 233, 
   129, 41, 27, 
   125, 38, 53, 
   130, 43, 88, 
   126, 40, 115, 
   130, 45, 150, 
   126, 42, 176, 
   131, 47, 211, 
   127, 43, 237, 
   157, 40, 31, 
   161, 45, 66, 
   158, 42, 92, 
   162, 47, 127, 
   158, 44, 154, 
   163, 49, 188, 
   159, 45, 215, 
   163, 50, 250, 
   193, 47, 43, 
   189, 44, 70, 
   194, 49, 105, 
   190, 46, 131, 
   194, 51, 166, 
   191, 48, 192, 
   195, 53, 227, 
   191, 49, 254, 
   221, 46, 47, 
   217, 43, 74, 
   222, 48, 109, 
   218, 45, 135, 
   222, 50, 170, 
   219, 47, 197, 
   223, 52, 231, 
   219, 48, 255, 
   9, 66, 0, 
   14, 71, 31, 
   10, 68, 58, 
   14, 73, 92, 
   10, 70, 119, 
   15, 75, 154, 
   11, 71, 180, 
   16, 76, 215, 
   45, 73, 9, 
   42, 70, 35, 
   46, 75, 70, 
   42, 72, 97, 
   47, 77, 131, 
   43, 74, 158, 
   39, 70, 184, 
   44, 75, 219, 
   73, 72, 13, 
   70, 69, 39, 
   74, 74, 74, 
   70, 71, 101, 
   75, 76, 135, 
   71, 73, 162, 
   75, 78, 197, 
   72, 74, 223, 
   101, 71, 17, 
   106, 76, 52, 
   102, 73, 78, 
   106, 78, 113, 
   103, 75, 139, 
   107, 80, 174, 
   103, 77, 201, 
   108, 82, 236, 
   138, 78, 29, 
   134, 75, 56, 
   138, 80, 90, 
   134, 77, 117, 
   139, 82, 152, 
   135, 79, 178, 
   131, 75, 205, 
   136, 80, 240, 
   166, 77, 33, 
   162, 74, 60, 
   166, 79, 95, 
   162, 76, 121, 
   167, 81, 156, 
   163, 78, 182, 
   168, 83, 217, 
   164, 79, 244, 
   194, 76, 37, 
   198, 81, 72, 
   194, 78, 99, 
   199, 83, 133, 
   195, 80, 160, 
   199, 85, 195, 
   196, 82, 221, 
   200, 87, 255, 
   230, 84, 50, 
   226, 80, 76, 
   230, 85, 111, 
   227, 82, 137, 
   223, 79, 164, 
   227, 84, 199, 
   224, 81, 225, 
   228, 86, 255, 
   18, 103, 0, 
   14, 100, 25, 
   18, 105, 60, 
   15, 102, 86, 
   19, 107, 121, 
   15, 104, 148, 
   20, 109, 183, 
   16, 105, 209, 
   46, 102, 3, 
   50, 107, 37, 
   46, 104, 64, 
   51, 109, 99, 
   47, 106, 125, 
   52, 111, 160, 
   48, 108, 187, 
   52, 113, 221, 
   74, 101, 7, 
   78, 106, 42, 
   74, 103, 68, 
   79, 108, 103, 
   75, 105, 129, 
   80, 110, 164, 
   76, 107, 191, 
   80, 112, 226, 
   110, 108, 19, 
   106, 105, 46, 
   111, 110, 80, 
   107, 107, 107, 
   111, 112, 142, 
   108, 109, 168, 
   112, 114, 203, 
   108, 110, 230, 
   138, 107, 23, 
   142, 112, 58, 
   139, 109, 84, 
   143, 114, 119, 
   139, 111, 146, 
   144, 116, 181, 
   140, 113, 207, 
   144, 118, 242, 
   166, 106, 27, 
   170, 111, 62, 
   167, 108, 89, 
   171, 113, 123, 
   167, 110, 150, 
   172, 115, 185, 
   168, 112, 211, 
   172, 117, 246, 
   202, 114, 40, 
   198, 110, 66, 
   203, 115, 101, 
   199, 112, 127, 
   204, 117, 162, 
   200, 114, 189, 
   204, 119, 224, 
   200, 116, 250, 
   230, 112, 44, 
   235, 117, 78, 
   231, 114, 105, 
   235, 119, 140, 
   232, 116, 166, 
   236, 121, 201, 
   232, 118, 228, 
   237, 123, 255, 
   18, 132, 0, 
   23, 137, 27, 
   19, 134, 54, 
   23, 139, 89, 
   20, 136, 115, 
   24, 141, 150, 
   20, 138, 177, 
   25, 143, 211, 
   55, 139, 5, 
   51, 136, 31, 
   55, 141, 66, 
   51, 138, 93, 
   56, 143, 128, 
   52, 140, 154, 
   57, 145, 189, 
   53, 141, 215, 
   83, 138, 9, 
   87, 143, 44, 
   83, 140, 70, 
   88, 145, 105, 
   84, 142, 132, 
   88, 147, 166, 
   85, 144, 193, 
   89, 149, 228, 
   111, 137, 13, 
   115, 142, 48, 
   111, 139, 74, 
   116, 144, 109, 
   112, 141, 136, 
   116, 146, 171, 
   113, 143, 197, 
   117, 148, 232, 
   147, 145, 25, 
   143, 141, 52, 
   147, 146, 87, 
   144, 143, 113, 
   148, 148, 148, 
   144, 145, 175, 
   149, 150, 209, 
   145, 147, 236, 
   175, 143, 29, 
   179, 148, 64, 
   175, 145, 91, 
   180, 150, 126, 
   176, 147, 152, 
   181, 152, 187, 
   177, 149, 213, 
   181, 154, 248, 
   203, 142, 34, 
   207, 147, 68, 
   203, 144, 95, 
   208, 149, 130, 
   204, 146, 156, 
   209, 151, 191, 
   205, 148, 218, 
   209, 153, 252, 
   239, 150, 46, 
   235, 146, 72, 
   240, 151, 107, 
   236, 148, 134, 
   240, 153, 169, 
   237, 150, 195, 
   241, 155, 230, 
   237, 152, 255, 
   27, 169, 0, 
   31, 174, 30, 
   28, 171, 56, 
   32, 176, 91, 
   28, 173, 118, 
   33, 178, 152, 
   29, 175, 179, 
   25, 171, 205, 
   55, 168, 0, 
   59, 173, 34, 
   56, 170, 60, 
   60, 175, 95, 
   56, 172, 122, 
   61, 177, 156, 
   57, 174, 183, 
   61, 179, 218, 
   91, 176, 11, 
   87, 172, 38, 
   92, 177, 73, 
   88, 174, 99, 
   93, 179, 134, 
   89, 176, 160, 
   93, 181, 195, 
   89, 178, 222, 
   119, 175, 15, 
   124, 180, 50, 
   120, 176, 77, 
   124, 181, 111, 
   121, 178, 138, 
   117, 175, 165, 
   121, 180, 199, 
   117, 177, 226, 
   147, 173, 19, 
   152, 178, 54, 
   148, 175, 81, 
   152, 180, 116, 
   149, 177, 142, 
   153, 182, 177, 
   149, 179, 203, 
   154, 184, 238, 
   183, 181, 32, 
   180, 177, 58, 
   184, 182, 93, 
   180, 179, 120, 
   185, 184, 154, 
   181, 181, 181, 
   185, 186, 216, 
   182, 183, 242, 
   211, 180, 36, 
   216, 185, 71, 
   212, 181, 97, 
   217, 186, 132, 
   213, 183, 158, 
   209, 180, 185, 
   213, 185, 220, 
   210, 182, 246, 
   239, 179, 40, 
   244, 184, 75, 
   240, 180, 101, 
   245, 185, 136, 
   241, 182, 163, 
   245, 187, 197, 
   241, 184, 224, 
   246, 189, 255, 
   36, 207, 0, 
   32, 203, 24, 
   36, 208, 58, 
   33, 205, 85, 
   37, 210, 120, 
   33, 207, 146, 
   38, 212, 181, 
   34, 209, 208, 
   64, 206, 1, 
   60, 202, 28, 
   64, 207, 63, 
   61, 204, 89, 
   65, 209, 124, 
   61, 206, 150, 
   66, 211, 185, 
   62, 208, 212, 
   92, 205, 5, 
   96, 210, 40, 
   92, 206, 67, 
   97, 211, 101, 
   93, 208, 128, 
   97, 213, 163, 
   94, 210, 189, 
   98, 215, 224, 
   128, 212, 18, 
   124, 208, 44, 
   129, 213, 79, 
   125, 210, 105, 
   129, 215, 140, 
   125, 212, 167, 
   130, 217, 202, 
   126, 214, 228, 
   156, 211, 22, 
   152, 207, 48, 
   157, 212, 83, 
   153, 209, 110, 
   157, 214, 144, 
   153, 211, 171, 
   158, 216, 206, 
   154, 213, 232, 
   184, 210, 26, 
   188, 215, 61, 
   185, 211, 87, 
   189, 216, 122, 
   185, 213, 148, 
   190, 218, 183, 
   186, 215, 210, 
   190, 220, 245, 
   220, 217, 38, 
   216, 214, 65, 
   221, 219, 99, 
   217, 215, 126, 
   221, 220, 161, 
   218, 217, 187, 
   222, 222, 222, 
   218, 219, 249, 
   248, 216, 42, 
   244, 213, 69, 
   249, 218, 103, 
   245, 214, 130, 
   249, 219, 165, 
   246, 216, 191, 
   250, 221, 226, 
   246, 218, 253, 
   36, 236, 0, 
   41, 241, 26, 
   37, 237, 52, 
   41, 242, 87, 
   37, 239, 114, 
   42, 244, 149, 
   38, 241, 175, 
   43, 246, 210, 
   72, 243, 3, 
   69, 240, 30, 
   73, 245, 65, 
   69, 241, 91, 
   74, 246, 126, 
   70, 243, 153, 
   74, 248, 187, 
   71, 245, 214, 
   100, 242, 8, 
   97, 238, 34, 
   101, 243, 69, 
   97, 240, 95, 
   102, 245, 130, 
   98, 242, 157, 
   102, 247, 192, 
   99, 244, 218, 
   128, 241, 12, 
   133, 246, 46, 
   129, 242, 73, 
   133, 247, 108, 
   130, 244, 134, 
   134, 249, 169, 
   130, 246, 196, 
   135, 251, 230, 
   165, 248, 24, 
   161, 245, 50, 
   165, 250, 85, 
   161, 246, 112, 
   166, 251, 147, 
   162, 248, 173, 
   167, 253, 208, 
   163, 250, 235, 
   193, 247, 28, 
   189, 244, 55, 
   193, 249, 89, 
   189, 245, 116, 
   194, 250, 151, 
   190, 247, 177, 
   195, 252, 212, 
   191, 249, 239, 
   221, 246, 32, 
   225, 251, 67, 
   221, 248, 93, 
   226, 253, 128, 
   222, 249, 155, 
   226, 254, 190, 
   223, 251, 216, 
   227, 255, 251, 
   255, 253, 44, 
   253, 250, 71, 
   255, 255, 106, 
   254, 251, 132, 
   255, 255, 167, 
   254, 253, 194, 
   255, 255, 228, 
   255, 255, 255
};

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

   if (log_cb)
      log_cb(RETRO_LOG_INFO, "%s", temp);

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

   if (log_cb)
      log_cb(RETRO_LOG_ERROR, "%s\n", temp);

   free(temp);

   va_end(ap);
}


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

bool MDFNI_LoadCD(const char *force_module, const char *devicename)
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
      return false;
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
         MDFN_printf(_("Track %2d, LBA: %6d  %s\n"), track, toc.tracks[track].lba, (toc.tracks[track].control & 0x4) ? "DATA" : "AUDIO");

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
      return false;
   }

   //MDFNI_SetLayerEnableMask(~0ULL);

   MDFN_LoadGameCheats(NULL);
   MDFNMP_InstallReadPatches();

   return true;
}

bool MDFNI_LoadGame(const char *force_module, const char *name)
{
   MDFNFILE *GameFile = NULL;
   MDFNGameInfo       = &EmulatedPCE_Fast;

   if (strlen(name) > 4 && (!strcasecmp(name + strlen(name) - 4, ".cue") || !strcasecmp(name + strlen(name) - 4, ".chd") || !strcasecmp(name + strlen(name) - 4, ".ccd") || !strcasecmp(name + strlen(name) - 4, ".toc") || !strcasecmp(name + strlen(name) - 4, ".m3u")))
      return (MDFNI_LoadCD(force_module, name));

   GameFile = file_open(name);

   if (!GameFile)
   {
      MDFNGameInfo = NULL;
      return false;
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

   return true;
}

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

#define MAX_PLAYERS 5
#define MAX_BUTTONS 15

struct RETRO_DEVICE_INFO {
   int type;

   // Array to keep track of whether a given player's button is turbo
   bool turbo_enable[MAX_BUTTONS];

   // Array to keep track of each buttons turbo status
   int turbo_counter[MAX_BUTTONS];
   int turbo_toggle_down[MAX_BUTTONS];
   uint8_t data[5];
};

struct RETRO_INPUT {
   bool use_bitmasks;
   // mouse options
   float mouse_sensitivity;

   // The number of frames between each firing of a turbo button
   int turbo_delay;
   int turbo_toggle;
   bool turbo_toggle_alt;

   // system options
   bool up_down_allowed;

   RETRO_DEVICE_INFO device[MAX_PLAYERS];
};

static RETRO_INPUT r_input;
static int aspect_ratio_mode;

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

   memset(&r_input, 0, sizeof(RETRO_INPUT));

   if (environ_cb(RETRO_ENVIRONMENT_GET_INPUT_BITMASKS, NULL))
      r_input.use_bitmasks = true;

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

static void check_variables(void)
{
   bool input_changed = false;
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
      int oldval = r_input.turbo_toggle;
      if (strcmp(var.value, "switch") == 0)
         r_input.turbo_toggle = 1;
      else if (strcmp(var.value, "dedicated") == 0)
         r_input.turbo_toggle = 2;
      else
         r_input.turbo_toggle = 0;
      if (r_input.turbo_toggle != oldval)
      {
         for (unsigned i = 0; i < MAX_PLAYERS; i++)
         {
            r_input.device[i].turbo_enable[0] = 0;
            r_input.device[i].turbo_enable[1] = 0;
         }
      }
   }

   var.key = "sgx_multitap";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      bool oldval = setting_pce_fast_multitap;

      if (strcmp(var.value, "enabled") == 0)
         setting_pce_fast_multitap = true;
      else
         setting_pce_fast_multitap = false;

      if (setting_pce_fast_multitap != oldval)
         input_changed = true;
   }

   var.key = "sgx_turbo_delay";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      r_input.turbo_delay = atoi(var.value);
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
         r_input.turbo_toggle_alt = true;
      else
         r_input.turbo_toggle_alt = false;
   }

   var.key = "sgx_mouse_sensitivity";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      r_input.mouse_sensitivity = atof(var.value);
   }

   var.key = "sgx_disable_softreset";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      bool oldval = setting_pce_fast_softreset;

      setting_pce_fast_softreset = (bool)(strcmp(var.value, "enabled") == 0);

      if (setting_pce_fast_softreset != oldval)
         input_changed = true;
   }

   if (input_changed)
   {
      PCEINPUT_SettingChanged(NULL);
   }

   var.key = "sgx_up_down_allowed";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      r_input.up_down_allowed = (strcmp(var.value, "enabled") == 0);
   }

   var.key = "sgx_palette";

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      if (strcmp(var.value, "Composite") == 0)
         use_palette = true;
      else
         use_palette = false;
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

   bool game = MDFNI_LoadGame(MEDNAFEN_CORE_NAME_MODULE, info->path);
   if (!game)
      return false;

   MDFN_PixelFormat pix_fmt(MDFN_COLORSPACE_RGB, 16, 8, 0, 13);
   last_pixel_format = MDFN_PixelFormat();

   surf = new MDFN_Surface(NULL, FB_WIDTH, FB_HEIGHT, FB_WIDTH, pix_fmt);
   VDC_SetPixelFormat(NULL, 0);

   // Possible endian bug ...
   for (unsigned i = 0; i < MAX_PLAYERS; i++)
   {
      r_input.device[i].type = RETRO_DEVICE_JOYPAD;
      PCEINPUT_SetInput(i, "gamepad", (uint8*)&r_input.device[i].data);
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
#define JOY_III    BIT(8)
#define JOY_IV     BIT(9)
#define JOY_V      BIT(10)
#define JOY_VI     BIT(11)
#define JOY_MODE   BIT(12)

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

static void update_input_turbo(int port, int &input_state, int input_data)
{
   static int last_mode;
   static bool changed;
   RETRO_DEVICE_INFO *cur_device = &(r_input.device[port]);

   if (last_mode != r_input.turbo_toggle)
   {
      last_mode = r_input.turbo_toggle;
      changed = true;
   }

   // We only care about JOY_I and JOY_II (bit0 and bit 1)
   for (unsigned i = 0; i < 2; i++)
   {
      // Check whether a given button is turbo-enabled
      if (cur_device->turbo_enable[i] == 1)
      {
         int which = 0;

         if (r_input.turbo_toggle == 1)
            which = map[i];
         else if (r_input.turbo_toggle == 2)
            which = turbo_map_layout[0][i];

         if (input_data & BIT(which)) // retropad to pce_joypad
         {
            // Turbo buttons only fire when their counter is zero or 1
            // FIXME: In some games, the buttons requires more frames held for specific action to react
            // e.g. an Attack button can react in just 1 frame while a Jump needs to have the buttons
            // held for 3 frames before it can be registered as a "Jump" action
            if (cur_device->turbo_counter[i] < 2)
               input_state |= (JOY_I + i);
            else
               input_state &= ~(JOY_I + i);
            if (++cur_device->turbo_counter[i] > r_input.turbo_delay) {
               input_state |= (JOY_I + i);
               cur_device->turbo_counter[i] = 0;
            }
         }
         else
            cur_device->turbo_counter[i] = 0;
      }
   }

   // switch
   if (r_input.turbo_toggle == 1)
   {
      unsigned turbo_map[2] = {
         turbo_map_layout[r_input.turbo_toggle_alt][0],
         turbo_map_layout[r_input.turbo_toggle_alt][1]
      };

      for (int i = 0; i < 2; i++)
      {
         if (input_data & BIT(turbo_map[i]))
         {
            if (cur_device->turbo_toggle_down[i] == 0)
            {
               cur_device->turbo_toggle_down[i] ^= 1;
               cur_device->turbo_enable[i] ^= 1;
               MDFN_DispMessage("Pad %i Button %s Turbo %s", port + 1,
                   i ? "II" : "I", cur_device->turbo_enable[i] ? "ON" : "OFF");
            }
         }
         else
            cur_device->turbo_toggle_down[i] = 0;
      }
   }

   // dedicated turbo buttons
   else if (r_input.turbo_toggle == 2 && changed)
   {
      cur_device->turbo_enable[0] = 1;
      cur_device->turbo_enable[1] = 1;
      changed = false;
   }
}

static void update_input(void)
{
   unsigned max_port = setting_pce_fast_multitap ? MAX_PLAYERS : 1;

   for (unsigned port = 0; port < max_port; port++)
   {
      RETRO_DEVICE_INFO *cur_device = &(r_input.device[port]);

      switch (cur_device->type)
      {
      case RETRO_DEVICE_JOYPAD:
      {
         int ret = 0;
         int input_state = 0;

         if (r_input.use_bitmasks)
         {
            // read all buttons using input bitmasks
            ret = input_state_cb(port, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_MASK);
         }
         else
         {
            // read all buttons using standard way
            for (unsigned id = RETRO_DEVICE_ID_JOYPAD_B; id < (1 + RETRO_DEVICE_ID_JOYPAD_R3); id++)
               ret |= input_state_cb(port, RETRO_DEVICE_JOYPAD, 0, id) ? BIT(id) : 0;
         }

         input_state = 0;

         // process normal buttons
         if (ret & BIT(RETRO_DEVICE_ID_JOYPAD_A))
            input_state |= JOY_I;
         if (ret & BIT(RETRO_DEVICE_ID_JOYPAD_B))
            input_state |= JOY_II;
         if (ret & BIT(RETRO_DEVICE_ID_JOYPAD_SELECT))
            input_state |= JOY_SELECT;
         if (ret & BIT(RETRO_DEVICE_ID_JOYPAD_START))
            input_state |= JOY_RUN;
         if (ret & BIT(RETRO_DEVICE_ID_JOYPAD_UP))
            input_state |= JOY_UP;
         if (ret & BIT(RETRO_DEVICE_ID_JOYPAD_RIGHT))
            input_state |= JOY_RIGHT;
         if (ret & BIT(RETRO_DEVICE_ID_JOYPAD_DOWN))
            input_state |= JOY_DOWN;
         if (ret & BIT(RETRO_DEVICE_ID_JOYPAD_LEFT))
            input_state |= JOY_LEFT;
         if (ret & BIT(RETRO_DEVICE_ID_JOYPAD_Y))
            input_state |= JOY_III;
         if (ret & BIT(RETRO_DEVICE_ID_JOYPAD_X))
            input_state |= JOY_IV;
         if (ret & BIT(RETRO_DEVICE_ID_JOYPAD_L))
            input_state |= JOY_V;
         if (ret & BIT(RETRO_DEVICE_ID_JOYPAD_R))
            input_state |= JOY_VI;
         if (ret & BIT(RETRO_DEVICE_ID_JOYPAD_L2))
            input_state |= JOY_MODE;

         // process turbo buttons only when in 2-button mode
         if (r_input.turbo_toggle != 0 && !AVPad6Enabled[port])
            update_input_turbo(port, input_state, ret);

         if (r_input.up_down_allowed == false)
         {
            if ((input_state & 0x50) == 0x50)
               input_state &= ~0x50;

            if ((input_state & 0xA0) == 0xA0)
               input_state &= ~0xA0;
         }

         cur_device->data[0] = (input_state >> 0) & 0xFF;
         cur_device->data[1] = (input_state >> 8) & 0xFF;
      } break;

      case RETRO_DEVICE_MOUSE:
      {
         int raw_x = input_state_cb(port, RETRO_DEVICE_MOUSE, 0, RETRO_DEVICE_ID_MOUSE_X);
         int raw_y = input_state_cb(port, RETRO_DEVICE_MOUSE, 0, RETRO_DEVICE_ID_MOUSE_Y);

         int mouse_x = (int)roundf((float)raw_x * r_input.mouse_sensitivity);
         int mouse_y = (int)roundf((float)raw_y * r_input.mouse_sensitivity);

         cur_device->data[0] = (mouse_x >> 0) & 0xFF;
         cur_device->data[1] = (mouse_x >> 8) & 0xFF;
         cur_device->data[2] = (mouse_y >> 0) & 0xFF;
         cur_device->data[3] = (mouse_y >> 8) & 0xFF;

         int button_state = 0;

         // left mouse button
         if (input_state_cb(port, RETRO_DEVICE_MOUSE, 0, RETRO_DEVICE_ID_MOUSE_LEFT))
            button_state |= BIT(0);

         // right mouse button
         if (input_state_cb(port, RETRO_DEVICE_MOUSE, 0, RETRO_DEVICE_ID_MOUSE_RIGHT))
            button_state |= BIT(1);

         // select
         if (input_state_cb(port, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_SELECT))
            button_state |= BIT(2);

         // start
         if (input_state_cb(port, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_START) ||
             input_state_cb(port, RETRO_DEVICE_MOUSE, 0, RETRO_DEVICE_ID_MOUSE_MIDDLE))
            button_state |= BIT(3);

         cur_device->data[4] = button_state;
      } break;

      default:
         // just set 0 for unused ports
         cur_device->data[0] = 0;
         cur_device->data[1] = 0;
         cur_device->data[2] = 0;
         cur_device->data[3] = 0;
         cur_device->data[4] = 0;
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
   static bool last_palette_format;

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
   spec.CustomPalette      = use_palette ? composite_palette : NULL;
   spec.CustomPaletteNumEntries = use_palette ? 512 : 0;

   if (last_palette_format != use_palette)
   {
      spec.VideoFormatChanged = TRUE;
      last_palette_format = use_palette;
   }

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
   r_input.use_bitmasks = false;
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
      r_input.device[in_port].type = device;

      switch (device)
      {
      case RETRO_DEVICE_JOYPAD:
         PCEINPUT_SetInput(in_port, "gamepad", (uint8*)&r_input.device[in_port].data);
         MDFN_printf("Player %u: gamepad\n", in_port + 1);
         break;
      case RETRO_DEVICE_MOUSE:
         PCEINPUT_SetInput(in_port, "mouse", (uint8*)&r_input.device[in_port].data);
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
   MDFN_FlushGameCheats(0);
}

void retro_cheat_set(unsigned index, bool enabled, const char *code)
{
   char name[256];
   char temp[256];
   char *codepart;

   if (code == NULL)
      return;

   sprintf(name, "N/A");
   strcpy(temp, code);
   codepart = strtok(temp, "+,;._ ");

   while (codepart)
   {
      // Cheat references are based on
      // https://gamehacking.org/system/pce
      // https://gamehacking.org/system/pcd
      //
      // accepts 1Fxxxx:xx raw format (ram)      
      // accepts 10xxxx:xx raw format (cd-ram)
      // accepts F8xxxx:xx physical address format (ram)
      if ((strlen(codepart) == 9) && (codepart[6]==':'))
      {
         codepart[6] = '\0';

         uint32 a = strtoul(codepart, NULL, 16);
         uint64 v = strtoul(codepart + 7, NULL, 16);

         // RAM region (0x1F0000 - 0x1F2000)
         //translate physical address to raw address format
         if ((a & 0xFFE000) == 0xF82000)
         {
            a &= 0x1FFF;
            a |= 0x1F0000;
         }

         // CD-RAM region (0x100000 - 0x110000)
         // translate physical address to raw address format
         // this is just guess-work and assumed the target address is always 0x10Axxx,
         // better use raw formats if possible
         if ((a & 0xFFC000) == 0x80C000)
         {
            a &= 0x1FFF;
            a |= 0x10A000;
         }
         
         // only accept codes in of valid address range
         // raw address = 0x1F0000 - 0x1F1FFF or physical address 0xF82xxx - 0xF83xxx (RAM) 
         // raw address = 0x0D0000 - 0x10FFFF (SYSTEM CARD RAM / CD-RAM)
         if ((a >= 0x1F0000) && (a < 0x1F2000) ||  // main RAM
            (a >= 0x100000) && (a < 0x110000)  ||  // CD RAM
            (a >= 0x00D000) && (a < 0x10FFFF))     // System Card RAM
         {
            if (!MDFNI_AddCheat(name, a, v, 0, 'R', 1, 0))
               log_cb(RETRO_LOG_DEBUG, "Failed to set code: '%s:%02x'\n", codepart,v);
            else
               log_cb(RETRO_LOG_DEBUG, "Code set: '%s:%02x'\n", codepart,v);
         }
         else
            log_cb(RETRO_LOG_DEBUG, "Invalid or unknown code: '%s:%02x'\n", codepart,v);
         /* log_cb(RETRO_LOG_DEBUG, "address=%08x v=%02x\n", a, v); */
      }
      else
         log_cb(RETRO_LOG_DEBUG, "Invalid or unknown code: '%s'\n", codepart);
      codepart = strtok(NULL,"+,;._ ");
   }
}

void MDFND_MidSync(const EmulateSpecStruct *)
{
}

void MDFN_MidLineUpdate(EmulateSpecStruct *espec, int y)
{
   //MDFND_MidLineUpdate(espec, y);
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
