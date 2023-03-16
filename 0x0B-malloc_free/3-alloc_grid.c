#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - entry point
 * @width: width of array
 * @height: height of array
 *
 * returns a pointer to a 2D array of integers
 *
 * Return: pointer
*/
int **alloc_grid(int width, int height)
{

	int **ptr;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return ('\0');
	}

	ptr = malloc(sizeof(int *) * height);

	if (ptr == 0)
	{
		return (0);
	}

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);

		if (ptr[i] == 0)
		{
			for (j = 0; j < i; j++)
			{
				free(ptr[j]);
			}

			free(ptr);
		}

		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}

		return (ptr);
	}
}
