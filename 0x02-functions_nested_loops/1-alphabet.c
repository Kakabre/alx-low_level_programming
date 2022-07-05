#include <stdlib.h>
#include <Time.h>
#include <stdio.h>

/**
 * main - Prints the alphabets in lowercase
 *
 * Return: 0 (success)
 */

int main(void)
{
	char d = 'a';

	while (d <= 'z')
	{
		_putchar(d);
		d++;
	}
	_putchar('\n');
	return (0);
}
