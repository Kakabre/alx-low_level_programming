#include "main.h"

/**
 * _islower - check for lowercase
 *
 * @c: ASCII code
 *
 * Return: Always 1 (Success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

