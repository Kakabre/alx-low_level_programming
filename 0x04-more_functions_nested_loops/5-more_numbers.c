#include "main.h"
#include <stdlib.h>

/**
 * more_numbers - prints 10 times the numbers 0 to 14
 * followed by a new line
 *
 * _putchar is used thrice
 *
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
				_putchar(j / 10 + '0');

			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
