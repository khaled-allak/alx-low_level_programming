#include <stdio.h>
#include "holberton.h"
#include <math.h>
/**
 * get_bit - Write a function that returns the value of a bit at a
 * given index.
 * Prototype: int get_bit(unsigned long int n, unsigned int index);
 * @index: is the index, starting from 0 of the bit you want to get
 * @n: bit value in the index.
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index &1);
}
