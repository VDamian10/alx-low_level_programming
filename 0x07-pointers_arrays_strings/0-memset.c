#include "main.h"
/**
 * _memset - entry point
 * @s: pointer to a character
 * @b: character
 * @n: byte size
 *
 * Return: char
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int o;

	while (o < n)
	{
		s[o] = b;
		o++;
	}

	return (s);

}
