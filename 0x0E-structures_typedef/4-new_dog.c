#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

int str_len(char *s);
void str_cpy(char *a, char *b);

/**
 * new_dog - creates a new dog type
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: struct
*/

dog_t *new_dog(char *name, float age, char *owner) /* creating a new dog */
{
	dog_t *d;

	d = malloc(sizeof(dog_t));

	if (d == NULL)
	{
		return (NULL);
	}

	if (name != NULL)
	{
		d->name = malloc(str_len(name) + 1);

		if (d->name == NULL)
		{
			free(d);
			return (NULL);
		}

		str_cpy(name, d->name);
	}

	else
		d->name = NULL;

	if (owner != NULL)
	{
		d->owner = malloc(str_len(owner) + 1);

		if (d->owner == NULL)
		{
			free(d->name);
			return (NULL);
		}

		str_cpy(owner, d->owner);
	}

	else
		d->owner = NULL;

	d->age = age;
	return (d);
}

/**
 * str_len - find length of a string
 * @s: string
 *
 * Return: int
*/
int str_len(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * str_cpy - copy a string
 * @a: string 1
 * @b: string 2
 *
 * Return: string
*/
void str_cpy(char *a, char *b)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		b[i] = a[i];
	}

	b[i] = '\0';
}

