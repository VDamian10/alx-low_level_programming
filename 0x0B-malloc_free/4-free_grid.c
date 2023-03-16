#include "main.h"
#include <stdlib.h>
/**
 * free_grid - entry point
 * @grid: pointer to a 2D array of integers
 * @height: height of array
 *
 * frees a 2D array pointed to by alloc_grid
 *
 * Return: void
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
