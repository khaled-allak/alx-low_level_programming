#include "main.h"

/**
 * *_strchr - fills memory with a constant byte
 * @s: pointer to put the constant
 * @c: constant
 * Return: pointer to s
*/

char *_strchr(char *s, char c)
{
	int gr;

	for (gr = 0; s[gr] >= '\0' ; gr++)
	{
		if (s[gr] == c)
		{
			return (s + gr);
		}
	}
	return ('\0');
}
