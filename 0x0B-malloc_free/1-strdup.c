#include "main.h"

/**
 * *_strdup - return a pointer to a new allocated space in memory containing
 * copy of string as parameter
 * @str: string
 * Return: 0
*/

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *m;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\n'; size++)
		;

	/*+1 ont the size puts the end of string character*/
	m =malloc(size * sizeof(*str) + 1);

	if (m == 0)
		return (NULL);
	else
	{
		for (; i < size; i++)
			m[i] = str[i];
	}
	return (m);
}
