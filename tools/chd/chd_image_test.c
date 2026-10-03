/* chd_image check against the BIN its CHD was made from.
 *
 *    chd_image_test <image.bin> <image.chd> [memcache]
 *
 * The BIN is the one tools/chd/make_fixture.py writes: a MODE1/2352 data
 * track followed by an audio track, stored back to back. This walks the
 * CHD's track metadata the way CDAccess_CHD lays tracks out in the CHD's
 * frame space -- each track padded to a multiple of four frames -- and
 * requires every frame chd_image_frame returns to hold that sector of the
 * BIN: data verbatim, audio byte-swapped (a CHD stores it big-endian),
 * and an all-zero subchannel, since the image records none.
 *
 * run.sh feeds this CHDs compressed with one CD codec family each (cdzs,
 * cdlz, cdzl, cdfl) and a child that differences against a parent, so a
 * codec the build cannot decode, or a hunk taken from the wrong image of
 * the chain, shows up as a failed or mismatched frame.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../../mednafen/cdrom/chd_image.h"

int main(int argc, char **argv)
{
   chd_image_t      *img;
   chd_image_track_t t;
   FILE             *bin;
   uint8_t           sector[2352];
   uint8_t           want[2352];
   char              err[512];
   uint32_t          index;
   uint32_t          chd_frame = 0;
   unsigned          frames    = 0;
   unsigned          bad       = 0;
   bool              memcache;

   if (argc < 3)
   {
      fprintf(stderr, "usage: %s image.bin image.chd [memcache]\n", argv[0]);
      return 2;
   }
   memcache = argc > 3 && !strcmp(argv[3], "memcache");

   if (!(bin = fopen(argv[1], "rb")))
   {
      printf("%s: cannot open\nRESULT: FAIL\n", argv[1]);
      return 1;
   }
   err[0] = '\0';
   if (!(img = chd_image_open(argv[2], memcache, err, sizeof(err))))
   {
      printf("%s\nRESULT: FAIL\n", err[0] ? err : "open failed");
      fclose(bin);
      return 1;
   }

   for (index = 0; chd_image_track(img, index, &t); index++)
   {
      int32_t i;
      bool    audio = !strcmp(t.type, "AUDIO");

      if (t.track != (int32_t)index + 1 || t.frames <= 0
            || (strcmp(t.type, "MODE1_RAW") && !audio))
      {
         printf("track %u: unexpected metadata (track %d, type %s, "
               "frames %d)\n", (unsigned)index + 1, (int)t.track, t.type,
               (int)t.frames);
         bad++;
         break;
      }

      for (i = 0; i < t.frames; i++)
      {
         const uint8_t *f = chd_image_frame(img, chd_frame + (uint32_t)i);
         unsigned       k;

         if (fread(sector, 1, sizeof(sector), bin) != sizeof(sector))
         {
            printf("BIN ends before track %u frame %d\n",
                  (unsigned)index + 1, (int)i);
            bad++;
            break;
         }
         memcpy(want, sector, sizeof(want));
         if (audio)
            for (k = 0; k < sizeof(want); k += 2)
            {
               want[k]     = sector[k + 1];
               want[k + 1] = sector[k];
            }

         frames++;
         if (!f)
         {
            if (bad < 8)
               printf("track %u frame %d: decode failed\n",
                     (unsigned)index + 1, (int)i);
            bad++;
            continue;
         }
         for (k = 2352; k < CHD_IMAGE_FRAME_BYTES && !f[k]; k++);
         if (memcmp(f, want, sizeof(want)) || k != CHD_IMAGE_FRAME_BYTES)
         {
            if (bad < 8)
               printf("track %u frame %d differs\n", (unsigned)index + 1,
                     (int)i);
            bad++;
         }
      }
      chd_frame += (uint32_t)((t.frames + 3) & ~3);
   }

   if (index != 2)
   {
      printf("expected 2 tracks, found %u\n", (unsigned)index);
      bad++;
   }

   chd_image_close(img);
   fclose(bin);

   printf("%s%s: %u frames, %u mismatches\nRESULT: %s\n", argv[2],
         memcache ? " (memcache)" : "", frames, bad, bad ? "FAIL" : "PASS");
   return bad ? 1 : 0;
}
