#include <stdlib.h>
#include "main.h"

/**
 * _calloc - alloctes memory for an array
 * @nmemb: number of elements
 * @size: size of data type
 * Return: pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int j;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (!arr)
		return (NULL);

	for (j = 0; j < nmemb * size; j++)
	{
		arr[j] = 0;
	}

	return (arr);
}
