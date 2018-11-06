#ifndef UTILS_IO_TOOLS_H
#define UTILS_IO_TOOLS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Gets size of opened file and puts in pointer.
 */
extern void iotools_get_file_size(FILE* fp, size_t* sz);

/**
  * @brief Reads from start to end bytes 
  *        into dst.
  */
extern void iotools_read_file_bytes(FILE* fp,
	                                unsigned char* dst,
	                                long start,
	                                long end);

#endif