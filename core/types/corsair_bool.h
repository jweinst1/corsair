#ifndef CORSAIR_BOOL_HEADER
#define CORSAIR_BOOL_HEADER

#include "corsair_types.h"

#define CORSAIR_BOOL_AND(c1, c2) (*(unsigned char*)(c1 + 1) && *(unsigned char*)(c2 + 1))

extern int corsair_bool_and(unsigned char* csb1, unsigned char* csb2);

#endif // CORSAIR_BOOL_HEADER