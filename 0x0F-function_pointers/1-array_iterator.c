#include <stdlib.h>
#include "function_pointers.h"
/**
 * prim - multiplies an integer by 2
 * @a: integer
 * Return: nothing 
*/
void prim(int a)
{
	int prod = a * 2;

	if (a == 0)
		return;
}


/**
 * array_iterator
*/
void array_iterator(int *array, size_t size, void (*action)(int));
{
	int o = 0;

	action = &prim;

	while (o < size)
	{
		action(array[o]);
		o++;
	}
}

