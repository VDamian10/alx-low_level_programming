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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		s++;
	}

	if (c == '\0')
	{
		return (s);
	}

	return ('\0');
}
