#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints 0-9
 * Excluding 2 and 4
 *
 * _putchar is used twice
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
			_putchar(i + '0');
	}
	_putchar('\n');
}