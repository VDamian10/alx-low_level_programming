#include "main.h"
/**
 * _strcat - entry point
 * @dest: one string
 * @src: another string
 *
 * concatenates two strings
 * Return: 0
*/

char *_strcat(char *dest, char *src)
{
	char *b = dest;

	while (*src != '\0')
	{
		*dest = *b;
		dest++;
		b++;
	}

	*dest = '\0';
	return (0);
}
