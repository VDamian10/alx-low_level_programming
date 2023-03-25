#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - searches for an integer
 * @array: name of array of integers
 * @size: size of array
 * @action: pointer to a function
 * Return: nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int o = 0;

	while (o < size)
	{
		action(array[o]);
		o++;
	}
}

