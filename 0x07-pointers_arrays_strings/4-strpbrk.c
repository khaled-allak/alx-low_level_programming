#include "main.h"

/**
 * _strpbrk - seaching for a string
 * @s: string
 * @accept: string matching
 * Return: pointer matches one of bytes in accept
 * Null if not found
 */

char *_strpbrk(char *s, char *accept)
{
	int gr, jj;
	char *p;

	gr = 0;
	while (s[gr] != '\0')
	{
		jj = 0;
		while (accept[jj] != '\0')
		{
			if (accept[jj] == s[gr])
			{
				p = &s[gr];
				return (p);
			}
			jj++;
		}
		gr++;
	}
	return (0);
}
