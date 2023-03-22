#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
int str_len(char *s);
char str_cpy(char *a, char *b);

/**
 * new_dog - creates a new dog type
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: struct
*/

/* creating a new dog */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));

	if (d == NULL)
	{
		return (NULL);
	}

	if (name != NULL)
	{
		d->name = malloc(sizeof(char) * (str_len(name) + 1));
		str_cpy(name, d->name);
	}

	else
	{
		free(d);
		return (NULL);
	}

	if (owner != NULL)
	{
		d->owner = malloc(sizeof(char) * (str_len(owner) + 1));
		str_cpy(owner, d->owner);
	}

	else
	{
		free(d->name);
		free(d);
		return (NULL);
	}

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
char str_cpy(char *a, char *b)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		b[i] = a[i];
	}

	b[i] = '\0';
	return (*b);
}

