#include "main.h"

/**
 * *_memset - fill memory with a constant byte
 * @s: pointer to put the constant
 * @b: constant
 * @n: max bytes to use
 * Return: pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int gr;

	for (gr = 0; n > 0; gr++, n--)
	{
		s[gr] = b;
	}

	return (s);
}
