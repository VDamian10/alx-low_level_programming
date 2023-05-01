#include "main.h"
/**
 * _strcpy - entry point
 * @dest: pointer to be copied to
 * @src: pointer to copy string from
 *
 * Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';
	return (dest);
}
