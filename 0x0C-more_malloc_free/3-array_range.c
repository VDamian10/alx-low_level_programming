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
	int i, *arr;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * ((max - min) + 1));

	if (!arr)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		arr[i - min] = i;
	}

	return (arr);

}
