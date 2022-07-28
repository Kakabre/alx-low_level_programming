#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum value of integer in array
 * @max: maximum value of integer in array
 * if min > max, Return NULL
 * if malloc fails, return NULL
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *ar;
	int q;

	if (min > max)
	return (NULL);

	ar = malloc(sizeof(*ar) * ((max - min) + 1));
	if (ar == NULL)
		return (NULL);

	for (q = 0; min <= max; q++, min++)
		ar[q] = min;

	return (ar);
}
