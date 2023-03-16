#include "main.h"
#include <stdlib.h>
/**
 * _strdup - entry point
 * @str: string
 *
 * a function that allocates new memory and copies a string
 *
 * Return: pointer
*/
char *_strdup(char *str)
{
	int i, j;
	char *v;

	for (j = 0; str[j] != '\0'; j++)
	{
		continue;
	}

	v = malloc(sizeof(char) * (str[j] + 1));

	if (!v)
	{
		return ('\0');
	}

	if (*str == '\0')
	{
		return ('\0');
	}

	for (i = 0; i < str[j] + 1; i++)
	{
		v[i] = str[i];
	}

	return (v);
}
