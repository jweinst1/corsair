#ifndef CORSAIR_TYPES_H
#define CORSAIR_TYPES_H

#include <stdint.h>

/*
 * @file Includes definition of the corsair_type_t enum
 */


#define CORSAIR_TYPES_NONE_SIZE 1
#define CORSAIR_TYPES_BOOL_SIZE 2

/**
 * @brief This enum represents the type marking
 *        within Corsair binary format.
 * @note  Each member of \s corsair_type_t should have
 *        a defined size macro.
 */
enum corsair_type_t
{
	corsair_none_type_t,
	corsair_bool_type_t
};


#endif