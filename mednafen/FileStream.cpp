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

#include "mednafen.h"
#include "Stream.h"
#include "FileStream.h"

#include <stdarg.h>
#include <string.h>

extern "C" {
RFILE* rfopen(const char *path, const char *mode);
int rfclose(RFILE* stream);
int64_t rfread(void* buffer,
   size_t elem_size, size_t elem_count, RFILE* stream);
int64_t rfwrite(void const* buffer,
   size_t elem_size, size_t elem_count, RFILE* stream);
int64_t rfseek(RFILE* stream, int64_t offset, int origin);
int64_t rftell(RFILE* stream);
}

FileStream::FileStream(const char *path, const int mode)
{
 if(mode == FileStream::MODE_WRITE)
  fp = rfopen(path, "wb");
 else
  fp = rfopen(path, "rb");
}

FileStream::~FileStream()
{
   close();
}

uint64 FileStream::read(void *data, uint64 count)
{
   return rfread(data, 1, count, fp);
}

void FileStream::write(const void *data, uint64 count)
{
   rfwrite(data, 1, count, fp);
}

void FileStream::seek(int64 offset, int whence)
{
   rfseek(fp, offset, whence);
}

int64 FileStream::tell(void)
{
   return rftell(fp);
}

int64 FileStream::size(void)
{
   return filestream_get_size(fp);
}

void FileStream::close(void)
{
   if(!fp)
      return;

   RFILE *tmp = fp;
   fp = NULL;
   rfclose(tmp);
}
