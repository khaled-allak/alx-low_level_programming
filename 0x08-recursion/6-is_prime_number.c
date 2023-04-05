#include "main.h"
#include <stdio.h>

/**
 *is_prime_number - check if n is a prime number
 *@not: int
 *@n: int
 *Return: 0 or 1
*/

int check_prime(int n, int not);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - check all number < n so can divide them
 * @n: int
 * @not: int
 * Return:int
*/

int check_prime(int n, int not)
{
	if (not >= n && n > 1)
		return (1);
	else if (n % not == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, not + 1));
}
