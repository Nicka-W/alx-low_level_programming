#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees 2 dimensional grid previously created by alloc_grid
 * function
 * @grid: 2 dimensional grid previously created by alloc_grid function
 * @height: number of columns of grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
