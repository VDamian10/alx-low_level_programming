#include "main.h"
/**
 * _strchr - entry point
 * @s: string
 * @c: character
 *
 * a function that finds the first occurence of a character in a string
 *
 * Return: pointer to c or NULL
*/
char *_strchr(char *s, char c)
{
	int v = 0;

	while (s[v] != '\0')
	{
		if (s[v] == c)
		{
			return (s);
		}

		v++;
		s++;
	}

	if (c == '\0')
	{
		return (s);
	}

	return ('\0');
}
