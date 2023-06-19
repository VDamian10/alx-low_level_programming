#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - frees dogs
 * @d: dog
 * Return: void
*/
void free_dog(dog_t *d)
{
	if (d != NULL) /* checking that ths struct is not NULL */
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
