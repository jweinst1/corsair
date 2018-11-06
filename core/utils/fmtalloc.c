#include "fmtalloc.h"
#include <stdint.h>

const char * BAD_ALLOC_STRING = "bad_alloc";


static inline void*
_safe_malloc(size_t size)
{
	void* mem_block = malloc(size);
	if(mem_block == NULL) {
		fprintf(stderr, "%s: Cannot allocate memory, exiting...\n", BAD_ALLOC_STRING);
		exit(1);
	} else return mem_block;
}

void* fmtalloc_mem(const char* fmt)
{
	size_t mem_size = 0;
	while(*fmt)
	{
		switch(*fmt)
		{
			case 'b':
			    mem_size++; // unsigned char always 1
			    break;
			case 's':
			    mem_size += sizeof(uint16_t);
			    break;
			case 'i':
			    mem_size += sizeof(uint32_t);
			    break;
			case 'l':
			    mem_size += sizeof(uint64_t);
			    break;
			case 'd':
			    mem_size += sizeof(double);
			    break;
			default:
			    fprintf(stderr, "fmtalloc_mem: Unknown size specifier '%c'.\n", *fmt);
			    exit(1);
		}
		fmt++;
	}
	return _safe_malloc(mem_size);
}