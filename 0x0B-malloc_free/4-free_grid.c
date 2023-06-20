#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - 2d array to frees
 * @height: height dim of grid
 * @grid: 2d grid
 * Description: frees memory of grid
 * Return: nothing
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
