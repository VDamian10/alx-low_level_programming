#include "main.h"
#include <stdlib.h>

/**
 * _strdup - entry point
 * @str: string
 * Return: pointer
*/
char *_strdup(char *str)
{
	int j, i = 0, len = 0;
	char *v;

	if (!str)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	len += 1;

	v = malloc(sizeof(char) * len);
	if (!v)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)
	{
		v[j] = str[j];
	}

	v[j] = '\0';

	return (v);
}
