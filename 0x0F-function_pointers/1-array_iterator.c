#include "function_pointers.h"
/**
 * array_iterator - searches for an integer
 * @array: array of integers
 * @size: size of the array
 * @action: pointer to a function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && action)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
