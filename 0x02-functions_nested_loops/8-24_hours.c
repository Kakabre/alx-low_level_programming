#include "main.h"

/**
 * jack bauer - function that prints every minute of the day, 24 hour clock 
 * h = hour, m = minutes
 * /10 allows second digit to rotate 
 * for loop breaks before passing 24:00
 * Return: 24 hour clock line by line
 */

void jack_bauer(void)
{
	int a, s, d, f;

	for (a = 48; a <= 50; a++)
	{
		for (s = 48; s <= 57; s++)
		{
			for (d = 48; d <= 53; d++)
			{
				for (f = 48; f <= 57; f++)
				{
					if (a >= 50 && s >= 52)
						break;
					_putchar(a);
					_putchar(s);
					_putchar(58);
					_putchar(d);
					_putchar(f);
					_putchar('\n');
				}
			}
		}
	}
}
