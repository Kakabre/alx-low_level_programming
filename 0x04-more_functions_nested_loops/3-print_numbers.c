#include "main.h"
#include <stdio.h>

/**
 * print_numbers: print numbers from 0 - 9
 *
 * Return: void
 *
 */
void print_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}