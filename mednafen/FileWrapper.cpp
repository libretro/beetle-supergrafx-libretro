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
#include "FileWrapper.h"

#include <stdarg.h>
#include <string.h>

extern "C" {
RFILE* rfopen(const char *path, const char *mode);
int rfclose(RFILE* stream);
int64_t rfread(void* buffer,
   size_t elem_size, size_t elem_count, RFILE* stream);
int64_t rfwrite(void const* buffer,
   size_t elem_size, size_t elem_count, RFILE* stream);
int rfputc(int character, RFILE * stream);
char *rfgets(char *buffer, int maxCount, RFILE* stream);
int64_t rfseek(RFILE* stream, int64_t offset, int origin);
int64_t rftell(RFILE* stream);
}

// For special uses, IE in classes that take a path or a FileWrapper & in the constructor, and the FileWrapper non-pointer member
// is in the initialization list for the path constructor but not the constructor with FileWrapper&

FileWrapper::FileWrapper(const char *path, const int mode, const char *purpose) : OpenedMode(mode)
{
 if(mode == MODE_WRITE)
  fp = rfopen(path, "wb");
 else
  fp = rfopen(path, "rb");

 if(!fp)
 {
  ErrnoHolder ene(errno);

  throw(MDFN_Error(ene.Errno(), _("Error opening file %s"), ene.StrError()));
 }
}

FileWrapper::~FileWrapper()
{
   close();
}

void FileWrapper::close(void)
{
   if(!fp)
      return;

   RFILE *tmp = fp;
   fp = NULL;
   rfclose(tmp);
}

uint64 FileWrapper::read(void *data, uint64 count, bool error_on_eof)
{
   return rfread(data, 1, count, fp);
}

void FileWrapper::write(const void *data, uint64 count)
{
   rfwrite(data, 1, count, fp);
}

void FileWrapper::put_char(int c)
{
   rfputc(c, fp);
}

void FileWrapper::put_string(const char *str)
{
   write(str, strlen(str));
}

// We need to decide whether to prohibit NULL characters in output and input strings via std::string.
// Yes for correctness, no for potential security issues(though unlikely in context all things considered).
void FileWrapper::put_string(const std::string &str)
{
   write(str.data(), str.size());
}

char *FileWrapper::get_line(char *buf_s, int buf_size)
{
   return rfgets(buf_s, buf_size, fp);
}


void FileWrapper::seek(int64 offset, int whence)
{
   rfseek(fp, offset, whence);
}

int64 FileWrapper::size(void)
{
   return filestream_get_size(fp);
}

int64 FileWrapper::tell(void)
{
   return rftell(fp);
}
