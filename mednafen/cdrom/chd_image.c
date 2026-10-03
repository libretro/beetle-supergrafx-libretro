/* chd_image: a CD image in a CHD file, read through libretro-common's rchd.
 * See chd_image.h. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <formats/rchd.h>
#include <streams/file_stream.h>
#include <file/file_path.h>
#include <retro_dirent.h>
#include <string/stdstring.h>
#include <compat/strl.h>

#include "chd_image.h"

/* Every CD codec chdman writes. rchd treats a codec it was built without
 * as unsupported only when a hunk needs it, so a build that dropped one
 * would open such images and then fail every read; this makes it fail to
 * build instead. */
#if !defined(HAVE_RCHD_DEFLATE) || !defined(HAVE_RCHD_LZMA) \
 || !defined(HAVE_RCHD_FLAC) || !defined(HAVE_RCHD_ZSTD)
#error "rchd must be built with all four CD codecs: see HAVE_CHD in Makefile.common"
#endif

#define CHD_PATH_BUF 4096

/* A child CHD references unchanged data in a parent file and a parent
 * can itself be a child; this bounds how many images one chain holds. */
#define CHD_MAX_PARENTS 8

/* Largest single read handed to the decoder when the file is neither
 * mapped nor cached; rchd accepts short supplies and asks again. */
#define CHD_IO_CHUNK 65536

/* One image of a chain: the decoder and the file it is fed from. When
 * the whole file is resident - mapped by the VFS (the open passes
 * FREQUENT_ACCESS) or read in under image_memcache - @base points at
 * it and hunk payloads are lent to the decoder in place rather than
 * copied; otherwise each request is read through the filestream. */
typedef struct
{
   rchd_t        *chd;
   RFILE         *fp;
   const uint8_t *base;
   uint8_t       *owned;   /* the image_memcache copy, when @base is it */
   int64_t        len;
} chd_src;

struct chd_image
{
   /* chain[0] is the image itself, chain[i + 1] the parent of chain[i] */
   chd_src  chain[CHD_MAX_PARENTS + 1];
   uint8_t *hunkmem;
   uint8_t *io_buf;
   uint32_t chain_len;
   uint32_t hunkbytes;
   uint32_t frames_per_hunk;
   uint32_t hunk_count;
   uint32_t oldhunk;       /* hunk held in hunkmem; hunk_count when none */
};

static void chd_set_err(char *err, size_t err_len, const char *what,
      const char *path)
{
   if (!err || !err_len)
      return;
   strlcpy(err, "CHD: ", err_len);
   strlcat(err, what, err_len);
   strlcat(err, ": \"", err_len);
   strlcat(err, path, err_len);
   strlcat(err, "\"", err_len);
}

static void chd_src_close(chd_src *src)
{
   if (src->chd)
      rchd_free(src->chd);
   /* closing the RFILE releases a VFS mapping with it */
   if (src->fp)
      filestream_close(src->fp);
   free(src->owned);
   src->chd   = NULL;
   src->fp    = NULL;
   src->base  = NULL;
   src->owned = NULL;
   src->len   = 0;
}

/* Satisfies one request from @src. @reading selects the read-time feed,
 * which lends resident bytes in place; the open sequence always copies. */
static bool chd_src_supply(chd_src *src, const rchd_request_t *rq,
      uint8_t *io_buf, bool reading)
{
   int64_t got;

   if (src->base)
   {
      const uint8_t *p;
      size_t         n;
      if (rq->offset >= (uint64_t)src->len)
         return false;
      p = src->base + (size_t)rq->offset;
      n = rq->length;
      if ((uint64_t)n > (uint64_t)src->len - rq->offset)
         n = (size_t)((uint64_t)src->len - rq->offset);
      if (reading)
         return rchd_feed_borrow(src->chd, rq->offset, rq->source,
               p, n) == RCHD_OK;
      return rchd_feed(src->chd, p, n) == RCHD_OK;
   }

   if (filestream_seek(src->fp, (int64_t)rq->offset,
            RETRO_VFS_SEEK_POSITION_START) < 0)
      return false;
   got = filestream_read(src->fp, io_buf,
         rq->length < CHD_IO_CHUNK ? rq->length : CHD_IO_CHUNK);
   if (got <= 0)
      return false;
   if (reading)
      return rchd_feed_at(src->chd, rq->offset, rq->source,
            io_buf, (size_t)got) == RCHD_OK;
   return rchd_feed(src->chd, io_buf, (size_t)got) == RCHD_OK;
}

/* Opens @path into @src and runs the decoder's open sequence (header,
 * map, metadata). On failure @src is left closed. */
static bool chd_src_open(chd_src *src, const char *path,
      bool image_memcache, uint8_t *io_buf)
{
   rchd_request_t rq;
   int            err;

   src->fp = filestream_open(path,
         RETRO_VFS_FILE_ACCESS_READ,
         RETRO_VFS_FILE_ACCESS_HINT_FREQUENT_ACCESS);
   if (!src->fp)
      return false;

   src->base = filestream_get_mapped_ptr(src->fp, &src->len);
   if (src->base && src->len <= 0)
      src->base = NULL;

   if (!src->base && image_memcache)
   {
      int64_t size = filestream_get_size(src->fp);
      if (size > 0 && (uint64_t)size == (uint64_t)(size_t)size
            && (src->owned = (uint8_t *)malloc((size_t)size)))
      {
         if (filestream_seek(src->fp, 0, RETRO_VFS_SEEK_POSITION_START) >= 0
               && filestream_read(src->fp, src->owned, size) == size)
         {
            src->base = src->owned;
            src->len  = size;
         }
         else
         {
            free(src->owned);
            src->owned = NULL;
         }
      }
      if (!src->base)
      {
         chd_src_close(src);
         return false;
      }
   }

   if (!(src->chd = rchd_new()))
   {
      chd_src_close(src);
      return false;
   }

   while ((err = rchd_open_step(src->chd, &rq)) == RCHD_PENDING)
   {
      if (!chd_src_supply(src, &rq, io_buf, false))
         break;
   }

   if (err != RCHD_OK)
   {
      chd_src_close(src);
      return false;
   }
   return true;
}

/* Combined SHA-1 of the CHD at @path, from its header alone. That is the
 * hash a child names its parent by, so this is all a parent search has
 * to read of each candidate. Versions 1 and 2 carry no SHA-1. */
static bool chd_peek_sha1(const char *path, uint8_t *sha1)
{
   uint8_t  h[124];
   uint32_t version;
   size_t   at;
   int64_t  got;
   RFILE   *fp = filestream_open(path,
         RETRO_VFS_FILE_ACCESS_READ,
         RETRO_VFS_FILE_ACCESS_HINT_NONE);

   if (!fp)
      return false;
   got = filestream_read(fp, h, sizeof(h));
   filestream_close(fp);

   if (got < 16 || memcmp(h, "MComprHD", 8))
      return false;

   version = ((uint32_t)h[12] << 24) | ((uint32_t)h[13] << 16)
           | ((uint32_t)h[14] <<  8) |  (uint32_t)h[15];
   switch (version)
   {
      case 3:  at = 80; break;
      case 4:  at = 48; break;
      case 5:  at = 84; break;
      default: return false;
   }
   if ((size_t)got < at + 20)
      return false;
   memcpy(sha1, h + at, 20);
   return true;
}

/* Search @dir for the parent of @child, matching each candidate's
 * combined SHA-1 against the parent SHA-1 the child records, and open
 * the match into @out. The child's own hash never equals the parent
 * hash it records, so the child is passed over without a path check. */
static bool chd_find_parent_in_dir(const char *dir, const rchd_t *child,
      chd_src *out, bool image_memcache, uint8_t *io_buf)
{
   struct RDIR *rdir = retro_opendir(dir);
   bool         ok   = false;
   char        *cand;

   if (!rdir)
      return false;
   if (!(cand = (char *)malloc(CHD_PATH_BUF)))
   {
      retro_closedir(rdir);
      return false;
   }

   while (retro_readdir(rdir))
   {
      const char *name = retro_dirent_get_name(rdir);
      const char *ext;
      uint8_t     sha1[20];

      if (!name || retro_dirent_is_dir(rdir, NULL))
         continue;

      ext = path_get_extension(name);
      if (!ext || !string_is_equal_noncase(ext, "chd"))
         continue;

      fill_pathname_join(cand, dir, name, CHD_PATH_BUF);

      if (!chd_peek_sha1(cand, sha1)
            || !rchd_parent_sha1_matches(child, sha1))
         continue;

      ok = chd_src_open(out, cand, image_memcache, io_buf);
      break;
   }

   free(cand);
   retro_closedir(rdir);
   return ok;
}

void chd_image_close(chd_image_t *img)
{
   uint32_t i;

   if (!img)
      return;
   /* A child holds its parent, so the chain closes child first. */
   for (i = 0; i <= CHD_MAX_PARENTS; i++)
      chd_src_close(&img->chain[i]);
   free(img->hunkmem);
   free(img->io_buf);
   free(img);
}

chd_image_t *chd_image_open(const char *path, bool image_memcache,
      char *err, size_t err_len)
{
   const rchd_info_t *info;
   chd_image_t       *img;
   char              *base_dir;

   if (!(img = (chd_image_t *)calloc(1, sizeof(*img))))
      return NULL;
   if (!(img->io_buf = (uint8_t *)malloc(CHD_IO_CHUNK))
         || !(base_dir = (char *)malloc(CHD_PATH_BUF)))
   {
      chd_image_close(img);
      return NULL;
   }

   if (!chd_src_open(&img->chain[0], path, image_memcache, img->io_buf))
   {
      chd_set_err(err, err_len, "failed to open", path);
      free(base_dir);
      chd_image_close(img);
      return NULL;
   }
   img->chain_len = 1;

   base_dir[0] = '\0';
   fill_pathname_basedir(base_dir, path, CHD_PATH_BUF);

   while (rchd_info(img->chain[img->chain_len - 1].chd)->has_parent)
   {
      rchd_t *child = img->chain[img->chain_len - 1].chd;

      if (img->chain_len > CHD_MAX_PARENTS
            || !chd_find_parent_in_dir(base_dir, child,
               &img->chain[img->chain_len], image_memcache, img->io_buf)
            || rchd_set_parent(child,
               img->chain[img->chain_len].chd) != RCHD_OK)
      {
         chd_set_err(err, err_len,
               "parent CHD not found in the same directory", path);
         free(base_dir);
         chd_image_close(img);
         return NULL;
      }
      img->chain_len++;
   }
   free(base_dir);

   info                 = rchd_info(img->chain[0].chd);
   img->hunkbytes       = info->hunk_bytes;
   img->hunk_count      = info->hunk_count;
   img->frames_per_hunk = img->hunkbytes / CHD_IMAGE_FRAME_BYTES;
   img->oldhunk         = img->hunk_count;
   if (!img->frames_per_hunk
         || !(img->hunkmem = (uint8_t *)malloc(img->hunkbytes)))
   {
      chd_set_err(err, err_len, "not a CD image", path);
      chd_image_close(img);
      return NULL;
   }
   return img;
}

/* Copies the @n'th @tag metadata entry, NUL-terminated, into @out. */
static bool chd_meta_text(const rchd_t *chd, uint32_t tag, uint32_t n,
      char *out, size_t out_size)
{
   const rchd_metadata_t *m = rchd_metadata_find(chd, tag, n);
   size_t                 len;

   if (!m)
      return false;
   len = m->length < out_size - 1 ? m->length : out_size - 1;
   memcpy(out, m->data, len);
   out[len] = '\0';
   return true;
}

bool chd_image_track(const chd_image_t *img, uint32_t index,
      chd_image_track_t *out)
{
   const rchd_t *chd = img->chain[0].chd;
   char          meta[256];

   memset(out, 0, sizeof(*out));

   /* Field widths are sizeof(dest) - 1, so no metadata string, however
    * long, writes past the buffers. */
   if (chd_meta_text(chd, RCHD_META_CDROM_TRACK2, index, meta, sizeof(meta)))
      sscanf(meta, "TRACK:%d TYPE:%63s SUBTYPE:%31s FRAMES:%d PREGAP:%d "
            "PGTYPE:%31s PGSUB:%31s POSTGAP:%d",
            &out->track, out->type, out->subtype, &out->frames,
            &out->pregap, out->pgtype, out->pgsub, &out->postgap);
   else if (chd_meta_text(chd, RCHD_META_CDROM_TRACK, index, meta,
            sizeof(meta)))
      sscanf(meta, "TRACK:%d TYPE:%63s SUBTYPE:%31s FRAMES:%d",
            &out->track, out->type, out->subtype, &out->frames);
   else
      return false;
   return true;
}

/* Decodes hunk @hunknum into hunkmem. Requests for a hunk that a child
 * shares with its parent are made by the parent's decoder, so the level
 * whose request is outstanding is the one whose file is read. */
static bool chd_image_read_hunk(chd_image_t *img, uint32_t hunknum)
{
   rchd_request_t rq;
   int            err = rchd_read_hunk_begin(img->chain[0].chd, hunknum,
         img->hunkmem);

   while (err == RCHD_OK
         && (err = rchd_read_step(img->chain[0].chd, &rq)) == RCHD_PENDING)
   {
      uint32_t lvl;

      for (lvl = 0; lvl < img->chain_len; lvl++)
         if (rchd_read_pending(img->chain[lvl].chd, &rq, 1))
            break;

      if (lvl == img->chain_len)
         err = RCHD_ERROR_STATE;
      else if (!chd_src_supply(&img->chain[lvl], &rq, img->io_buf, true))
         err = RCHD_ERROR_DATA;
      else
         err = RCHD_OK;
   }
   return err == RCHD_OK;
}

const uint8_t *chd_image_frame(chd_image_t *img, uint32_t frame)
{
   uint32_t hunknum = frame / img->frames_per_hunk;

   if (hunknum >= img->hunk_count)
      return NULL;
   if (hunknum != img->oldhunk)
   {
      if (!chd_image_read_hunk(img, hunknum))
      {
         img->oldhunk = img->hunk_count;
         return NULL;
      }
      img->oldhunk = hunknum;
   }
   return img->hunkmem
      + (size_t)(frame % img->frames_per_hunk) * CHD_IMAGE_FRAME_BYTES;
}
