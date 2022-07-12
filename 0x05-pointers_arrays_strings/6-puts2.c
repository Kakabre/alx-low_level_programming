#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with thw first character
 * followed by a new line
 * @str: string to be printed
 *
 */

void puts2(char *str)
{
	int abcd = 0;

	while (abcd >= 0)
	{
		if (str[abcd] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (abcd % 2 == 0)
			_putchar(str[abcd]);
		abcd++;
	}
}
