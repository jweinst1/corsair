#include "corsair_bool.h"

int corsair_bool_and(unsigned char* csb1, unsigned char* csb2)
{
	return (*(unsigned char*)(csb1 + 1) && *(unsigned char*)(csb2 + 1));
}