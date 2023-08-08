#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Free of 2D array
 * @grid: 2D grid
 * @height:The height of grid
 *
 * Return: Nothing
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
