#include "main.h"
/**
 * _memcpy - entry point
 * @dest: destination
 * @src: source
 * @n: size of bytes
 *
 * a function that copies memory area
 *
 * Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int o = 0;

	while (o < n)
	{
		dest[o] = src[o];
		o++;
	}

	return (dest);
}
