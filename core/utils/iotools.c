#include "iotools.h"
#include <assert.h>

/* @brief Fast inline function to get size of file
 *        that is already opened.
 */
static inline void
_get_file_ptr_size(FILE* fp, size_t* sz)
{
        fseek(fp, 0L, SEEK_END);
        *sz = ftell(fp);
        rewind(fp);
}

void iotools_get_file_size(FILE* fp, size_t* sz)
{
	assert(fp != NULL);
	_get_file_ptr_size(fp, sz);
}

void iotools_read_file_bytes(FILE* fp,
	                                unsigned char* dst,
	                                long start,
	                                long end)
{
	fseek(fp, start, SEEK_SET);
	fread(dst, end-start, 1, fp);
}