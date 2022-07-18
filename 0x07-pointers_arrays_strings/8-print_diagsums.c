#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of two diagonals
 * of a square matrix of integers
 * @a: array name
 * @size: array size
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int d = 0;
	int e = size - 1;
	int sum1 = 0;
	int sum2 = 0;

	while (d <= (size * size))
	{
		sum1 = sum1 + a[d];
		d = d + size + 1;
	}
	while (e < (size * size - 1))
	{
		sum2 += a[e];
		e = e + size - 1;
	}
	printf("%d, %d\n", sum1, sum2);
}
