#include "main.h"
/**
 * _strncat - entry point
 * @dest: string to be concatenated to
 * @src: string to concatenate
 * @n: number of bytes of string src
 *
 * Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		for (j = 0; src[j] != '\0' && n-- > 0; j++)
		{
			dest[i] = src[j];
		}
	}
	return (dest);
}
