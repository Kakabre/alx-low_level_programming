#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2dimensional grid previously
 * created by the alloc_grid function
 * @grid: grid to be freed
 * @height: height of grid
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int m = 0;

	while (m < height)
	{
		free(grid[m]);
		m++;
	}
	free(grid);

}
