#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer
 * @size: size of buffer
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int a, d, c;

	if (size <= 0)
		printf("\n");
	else
	{
		for (a = 0; a < size; a += 10)
		{
			printf("%.8x: ", a);
			for (d = a; d < a + 10; d++)
			{
				if (d % 2 == 0)
					printf(" ");
				if (d < size)
					printf("%.2x", (*b + d));
				else
					printf(" ");
			}

				for (c = a; c < d + 10; c++)
				{
					if (c >= size)
						break;
					if (*(b + 1) < 32 || *(b + 1) > 126)
						printf("%c", '.');
					else
						printf("%c", *(b + 1));
				}
				printf("\n");
		}
	}
}

