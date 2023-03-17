#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: size of bites
 *
 * Return: nothing
*/
void *malloc_checked(unsigned int b)
{
	void *o;

	o = malloc(sizeof(unsigned int));

	if (o == NULL)
	{
		exit(98);
	}

	return (o);
}
