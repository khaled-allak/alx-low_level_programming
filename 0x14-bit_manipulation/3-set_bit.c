#include "main.h"

/**
 * set_bit - set the  value to the index
 * @n: the number of index
 * @index: the bit to get
 * Return: 1 if succes -1 in case of error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

return (!!(*n |= 1L << index));
}
