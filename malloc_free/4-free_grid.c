#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - Frees a 2D grid previously created by alloc_grid.
 * @grid: Pointer to the 2D grid.
 * @height: Height of the grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL && height > 0)
	{
		for (i = height - 1; i >= 0; i--)
			free(grid[i]);
		free(grid);
	}
}
