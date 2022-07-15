#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer
 * Return: void
 */

void print_number(int n)
{
	unsigned int o, e, count;

	if (n < 0)
	{
		_putchar(45);
		o = n * -1;
	}
	else
	{
		o = n;
	}
	e = o;
	count = 1;

	while (e > 9)
	{
		e /= 10;
		count *= 10;
	}
	for (; count >= 1; count /= 10)
	{
		_putchar(((o / count) % 10) + 48);
	}
}
