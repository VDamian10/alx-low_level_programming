#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - entry point
 * @width: width of array
 * @height: height of array
 * Return: pointer
*/
int **alloc_grid(int width, int height)
{

	int **ptr;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int *) * height);
	if (!ptr)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);

		if (!ptr[i])
			return (NULL);

		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}

	}
	return (ptr);
}
