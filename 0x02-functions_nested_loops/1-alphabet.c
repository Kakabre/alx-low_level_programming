#include "main.h"

/**
 * main - Prints the alphabets in lowercase
 * followed by a new line
 * you can only use _putchar twice
 *
 * Return: 0 (success)
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
