#include "main.h"
#include <stdlib.h>
/**
 * create_array - entry point
 * @size: size of the array
 * @c: character to be specified
 *
 * Return: array
*/
char *create_array(unsigned int size, char c)
{
	char *v;
	unsigned int o;

	if (size == 0)
	{
		return ('\0');
	}

	v = malloc(sizeof(char) * size);

	if (!v)
	{
		return ('\0');
	}

	for (o = 0; o < size; o++)
	{
		*(v + o) = c;
	}

	return (v);

}
