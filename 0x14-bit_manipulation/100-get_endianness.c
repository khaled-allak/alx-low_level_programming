#include "main.h"

/**
 * get_endlianness - returns the endianness from system
 *
 * Return: 0 if big endian, 1 if small
*/
int get_endianness(void)
{
	unsigned long int n = 1;
	return (*(char *)&n);
}
