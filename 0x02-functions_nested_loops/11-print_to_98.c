#include "main.h"

/**
 * print_to_98 - all natural numbers from n to 98
 *
 * @n: as int
 *
 * Return: Always void
 */

int print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n)
		}
	}
	printf("%d\n", n);
}
