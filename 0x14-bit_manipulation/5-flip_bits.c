#include "main.h"

/**
 * flip_bits - return the number of bits
 * needed to be flipped to transfer from number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip to convert numbers
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

unsigned long int xorval = n ^ m;
unsigned int count = 0;

while (xorval)
{
	if (xorval & 1ul)
		count++;
	xorval = xorval >> 1;
}
return (count);
}
