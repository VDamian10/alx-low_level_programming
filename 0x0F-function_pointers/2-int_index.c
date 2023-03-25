#include <stdlib.h>
#include "function_pointers.h"
/**
 * cmpme - compares values
 * @x: integer to compare
 * Return: Always 0 unless there's a match
*/
int cmpme(int x)
{
	if (x != 2)
		return (0);

	else
		;
}

/**
 * int_index - returns the index of the first match
 * @array: array of integers
 * @size: size of the array
 * @cmp: pointer to _cmpme
 * Return: index of the match
*/
int int_index(int *array, int size, int (*cmp)(int x))
{
	int i = 0, key = 2;
	cmp = &cmpme;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	while (i < size)
	{
		cmp(array[i]);

		if (array[i] == key)
		{
			return (i);
		}

		else
			return (-1);

		i++;
	}

}
