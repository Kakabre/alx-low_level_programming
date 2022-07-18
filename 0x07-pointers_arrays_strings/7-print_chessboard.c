#include "main.h"

/**
 * print_chessboard - function prints chessboard
 * @a: row
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int l, m;

	for (l = 0; l < 8; l++)
	{
		for (m = 0; m < 8; m++)
		{
			if (m == 7)
			{
				_putchar(a[l][m]);
				_putchar('\n');
			}
			else
				_putchar(a[l][m]);
		}
	}
}
