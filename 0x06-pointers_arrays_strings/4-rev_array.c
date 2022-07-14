#include "main.h"

/**
 * reverse_array - reverses the contentvof an array of integers
 * @a: array
 * @n: elements of array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int b, c, d;

	for (b = 0; b < n - 1; b++)
	{
		for (c = b + 1; c > 0; c--)
		{
			d = *(a + c);

			*(a + c) = *(a + (c - 1));
			*(a + (c - 1)) = d;
		}
	}
}
