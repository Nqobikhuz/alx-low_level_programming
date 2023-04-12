#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - a function that frees a 2 dimensional grid
 *
 * @grid: 2 dimentioal grid to be freed
 * @height: height of grid
 *
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}

