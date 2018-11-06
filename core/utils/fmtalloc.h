#ifndef UTILS_FMT_ALLOC_H
#define UTILS_FMT_ALLOC_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * @file Contains functions to allocate memory for a format specified size.
 *       Such as, 'blbl' means 8-bit unsigned, 64-bit unsigned, 8-bit unsgined
 *       64-bit unsigned pattern of size. 
 */


extern void* fmtalloc_mem(const char* fmt);



#endif