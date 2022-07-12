#include "main.h"

/**
 * print_rev - write a function that prints string in reverse
 * @s: string to be printed in reverse
 */

void print_rev(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (s[i] != '\0')
	{
		_putchar(s[i--]);
	}
	_putchar('\n');
}

