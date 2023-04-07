#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - dsscription
 * @a: array of int types in 2d
 * @size: the size of array square
*/

void print_diagsums(int *a, int size)
{
	int gr, s1 = 0, s2 = 0;

	for (gr = 0; gr < size; gr++)
	{
		s1 += a[gr];
		s2 += a[size - gr - 1];
		a += size;
	}
	printf("%d, ", s1);
	printf("%d\n", s2);
}
