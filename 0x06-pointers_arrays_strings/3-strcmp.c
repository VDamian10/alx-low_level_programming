#include "main.h"
/**
 * _strcmp - entry point
 * @s1: first string
 * @s2: second string
 *
 * This program compares two strings
 *
 * Return: 0
*/
int _strcmp(char *s1, char *s2)
{
	int o;

	o = 0;

	while (s1[o] == s2[o])
	{
		if (s1[o] == '\0')
		{
			return (0);
		}

		o++;
	}

	return (s1[o] - s2[o]);
}
