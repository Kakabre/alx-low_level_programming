#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array
 * of integers with each element initalized to 0.
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 * Return: If width <= 0, height <= 0,
 * or the function fails - NULL.
 * Otherwise - a pointer to the 2-dimensional array of integer
 */

int **alloc_grid(int width, int height)
{
	int **pr;
	int i, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	pr = malloc(sizeof(int *) * height);
	if (pr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		pr[i] = malloc(sizeof(int) * width);
		if (pr[i] == NULL)

		{
			while (i >= 0)
			{
				free(pr[i]);
				i--;
			}

			free(pr);
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
			pr[j][k] = 0;
	}
	return (pr);
}
