#include "main.h"
/**
 * _strncpy - entry point
 * @dest: destination
 * @src: source
 * @n: number of characters to copy
 *
 * Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int u, i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}

	for (u = 0; src[u] != '\0' && u <= n; u++)
	{
		dest[i] = src[u];
	}

	return (dest);
}
