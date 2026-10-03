/* chd_image: a CD image in a CHD file, read through libretro-common's rchd.
 *
 * Opens the image and any parent images it differences against (found by
 * SHA-1 in the image's own directory), reports the CD track metadata, and
 * hands back decoded frames: 2352 bytes of sector data followed by 96 of
 * subchannel, in the CHD's logical frame order. The most recently decoded
 * hunk is cached, so walking consecutive frames decodes each hunk once.
 */
#ifndef MDFN_CDROM_CHD_IMAGE_H
#define MDFN_CDROM_CHD_IMAGE_H

#include <stddef.h>
#include <stdint.h>
#include <boolean.h>

#ifdef __cplusplus
extern "C" {
#endif

#define CHD_IMAGE_FRAME_BYTES (2352 + 96)

typedef struct chd_image chd_image_t;

/* One entry of the CD track metadata ('CHT2', or 'CHTR' on images that
 * predate it, which leaves the gap fields zero and the gap strings empty). */
typedef struct chd_image_track
{
   int32_t track;
   int32_t frames;
   int32_t pregap;
   int32_t postgap;
   char    type[64];
   char    subtype[32];
   char    pgtype[32];
   char    pgsub[32];
} chd_image_track_t;

/**
 * chd_image_open:
 * @path           : the .chd file
 * @image_memcache : read every image of the chain into memory up front
 * @err            : receives a message on failure; may be NULL
 * @err_len        : capacity of @err
 *
 * Returns: the image, or NULL with @err filled in.
 */
chd_image_t *chd_image_open(const char *path, bool image_memcache,
      char *err, size_t err_len);

void chd_image_close(chd_image_t *img);

/**
 * chd_image_track:
 * @img   : image
 * @index : zero-based position in the metadata, not the track number
 * @out   : receives the entry
 *
 * Returns: true if the image has an entry at @index.
 */
bool chd_image_track(const chd_image_t *img, uint32_t index,
      chd_image_track_t *out);

/**
 * chd_image_frame:
 * @img   : image
 * @frame : logical frame number within the CHD
 *
 * Returns: CHD_IMAGE_FRAME_BYTES of decoded frame, valid until the next
 * call on @img, or NULL if the hunk holding it failed to decode.
 */
const uint8_t *chd_image_frame(chd_image_t *img, uint32_t frame);

#ifdef __cplusplus
}
#endif

#endif
