#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints new struct for dog
 * @d: name of struct
 *
 * Return: void
*/

void print_dog(struct dog *d)
{
	if (!d)
		return;

	if (d->name != NULL)
		printf("Name: %s\n", d->name);

	else
		printf("Name: (nil)\n");

	printf("Age: %f\n", d->age);

	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);

	else
		printf("Owner: (nil)\n");
}
