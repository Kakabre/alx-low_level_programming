#include "main.h"
#include <stdlib.h>

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: the number of times \ should be printed
 * followed by a new line
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				if (j != 1)
					_putchar(' ');
				if (j == 1)
				{
					_putchar(92);
					_putchar('\n');
				}
			}
		}
	}
	else
		_putchar('\n');
}
