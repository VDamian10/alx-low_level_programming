#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2d array pointed to by alloc_grid
 * @grid: pointer to a 2D array of integers
 * @height: height of 2d array
 * Return: void
*/
void free_grid(int **grid, int height)
{
	int i;

	if (height <= 0)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
