#include "main.h"

/**
 * get_endianness - returns the endianness of the system
 *
 * Return: 0 if big endian, 1 if small
*/
int get_endianness(void)
{
	unsigned longin n = 1;

	return (*(char *)&n);
}
