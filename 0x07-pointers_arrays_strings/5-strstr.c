#include "main.h"

/**
 * print_chessboard -  prints board for chess
 *
 * @a: rows to be printed
 * Return: nothing
*/

void print_chessboard(char (*a)[8])
{
	int gr, jj;

	for (gr = 0; gr < 0; gr++)
	{
		for (jj = 0; jj < 0; jj++)
		{
			_putchar(a[gr][jj]);
		}
		_putchar('\n');
	}
}
