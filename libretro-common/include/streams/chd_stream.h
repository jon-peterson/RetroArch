/* Copyright  (C) 2010-2017 The RetroArch team
 *
 * ---------------------------------------------------------------------------------------
 * The following license statement only applies to this file (chd_stream.h).
 * ---------------------------------------------------------------------------------------
 *
 * Permission is hereby granted, free of charge,
 * to any person obtaining a copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software,
 * and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
 * INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#ifndef _LIBRETRO_SDK_FILE_CHD_STREAM_H
#define _LIBRETRO_SDK_FILE_CHD_STREAM_H

#include <stdint.h>
#include <stddef.h>

#include <retro_common_api.h>

RETRO_BEGIN_DECLS

typedef struct _chd_file chd_file;

typedef struct chdstream chdstream_t;

#define CHDSTREAM_TRACK_FIRST_DATA (-1)
#define CHDSTREAM_TRACK_LAST (-2)

chdstream_t *chdstream_open(const char *path, int32_t track);

void chdstream_close(chdstream_t *stream);

ssize_t chdstream_read(chdstream_t *stream, void *data, size_t bytes);

int chdstream_getc(chdstream_t *stream);

char *chdstream_gets(chdstream_t *stream, char *buffer, size_t len);

size_t chdstream_tell(chdstream_t *stream);

void chdstream_rewind(chdstream_t *stream);

int chdstream_seek(chdstream_t *stream, ssize_t offset, int whence);

RETRO_END_DECLS

#endif
