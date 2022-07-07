#include "main.h"
#include <stdlib.h>

/**
 * print_line - writes a line n times
 * followed by a new line
 *
 * using _putchar function
 *
 * Return: void
 */

void print_line(void)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
