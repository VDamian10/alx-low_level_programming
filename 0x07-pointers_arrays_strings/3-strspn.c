#include "main.h"
/**
 * _strspn - entry point
 * @s: string
 * @accept: substring
 *
 * a function that gets the length of a prefix string
 *
 * Return: number of bytes
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int v, u;

	for (v = 0; s[v] != '\0'; v++)
	{
		for (u = 0; accept[u] != '\0'; u++)
		{
			if (s[v] == accept[u])
			{
				len++;
			}
		}

		if (accept[u] == '\0')
		{
			return (len);
		}
	}

	return (len);
}
