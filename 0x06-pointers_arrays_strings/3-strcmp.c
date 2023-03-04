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

	for (o = 0; s1[o] == s2[o]; o++)
	{
		if (s1[o] == '\0')
		{
			return (0);
		}

		return (s1[o] - s2[o]);
	}
}
