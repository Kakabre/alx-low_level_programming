#include "main.h"

/**
 * main - Prints the alphabets in lowercase
 *
 * Return: 0 (success)
 */

int void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
