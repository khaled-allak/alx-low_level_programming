#include "main.h"

/**
 * clear_bit - clear the bit at given index
 * @n: the number in index
 * @index: the bit which will be cleared
 *
 * Return: 1 if succes -1 in case of error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}
