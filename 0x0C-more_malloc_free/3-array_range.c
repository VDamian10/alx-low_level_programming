#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimu value
 * @max: maximum value
 * Return: pointer to an array of integers
*/

int *array_range(int min, int max)
{
	int i;

	if (min > max)
		return (NULL);

	int *arr = malloc(sizeof(int) * ((max - min) + 1));

	if (!arr)
		return (NULL);

	for (i = 0; i >= min && i <= max; i++)
	{
		arr[i] = i;
	}

	return (arr);

}
