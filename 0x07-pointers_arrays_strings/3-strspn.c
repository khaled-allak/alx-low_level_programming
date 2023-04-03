#include "main.h"

/**
 * _strspn - get the lenght of prefix
 * @s: string
 * @accept: beyte
 * Return: unsigned inte
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int gr, jj
		;
	for (gr = 0; s[gr] != '\0'; gr++)
	{
		for (jj = 0; accept[jj] != s[gr]; jj++)
		{
			if (accept[jj] == '\0')
				return (gr);
		}
	}
	return (gr);
}
