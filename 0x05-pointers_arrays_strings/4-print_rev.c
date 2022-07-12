#include "main.h"

/**
 * print_rev - write a function that prints string in reverse
 * @s: string to be printed in reverse
 */

void print_rev(char *s)
{
	int i = 0;

	while (i >= 0)
	{
		if (s[i] == '\0')
			break;
		i++;
	}

	for (i--; i >= 0; i--)

	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

