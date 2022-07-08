#include "main.h"

/**
 * print_line - writes a line n times
 * @n: line
 *
 * using _putchar function
 *
 * Return: void
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
