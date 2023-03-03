#include "main.h"
/**
 * _strcmp - entry point
 * @s1: first string
 * @s2: second string
 *
 * Return: 0
*/
int _strcmp(char *s1, char *s2)
{
	int u;

	for (u = 0; s1[u] == s2[u]; u++)
		;

	if (s1[u] == s2[u])
	{
		return (0);
	}

	else
	{
		return (s1[u] - s2[u]);
	}
}
