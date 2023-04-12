#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an array of chars and initiate it
 *@size: size of the array
 *@c: character to initiate
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);

	while (size--)
		n[size] = c;

	return (n);
}
