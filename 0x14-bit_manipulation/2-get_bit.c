#include "main.h"

/**
 * get_bit - returns the bit at a given index
 * @n: the number in index
 * @index: in which the bit we get
 *
 * Return: bit at given index or -1 if error accured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
