#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: pointer to newly concatenated string
*/
char *str_concat(char *s1, char *s2)
{
	char *new;
	char emptys[] = "";
	int i, j = 0, newlen;

	if (!s1)
		s1 = emptys;

	if (!s2)
		s2 = emptys;

	newlen = slen(s1) + slen(s2);

	new = malloc(sizeof(char) * (newlen + 1));
	if (!new)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		*(new + i) = s1[i];
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		*(new + i + j) = s2[j];
	}
	*(new + i + j) = '\0';

	return (new);

}
