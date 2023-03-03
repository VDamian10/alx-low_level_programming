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
	int u;

	for (u = 0; src[u] != '\0' && u <= n; u++)
	{
		dest[u] = src[u];
	}

	for (; u <= n; u++)
	{
		dest[u] = '\0';
	}

	return (dest);
}
