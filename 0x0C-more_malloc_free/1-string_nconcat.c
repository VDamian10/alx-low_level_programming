#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concats two strings
 * @s1: string one
 * @s2: second string
 * @n: size of bytes
 * Return: pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, len = 0;
	unsigned int k;
	char *str;

	if (!s1)
		s1 = "";

	if (!s2)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
		len++;
	}

	str = malloc(sizeof(char) * (len + n + 1));

	if (!str)
		return (NULL);

	for (j = 0; j < len; j++)
	{
		*(str + j) = s1[j];
	}

	for (k = 0; k < n; k++)
	{
		*(str + j + k) = s2[k];
	}

	*(str + len + n) = '\0';
	return (str);
}
