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
	char *o;
	int v;

	o = &c;
	v = 0;

	while (s[v] != '\0')
	{
		if (s[v] == *o)
		{
			return (s);
		}

		else
		{
			return ('\0');
		}

		v++;
	}
}
