#include "main.h"

/**
 * _strcpy - copies string from source to destination
 * @dest: destination
 * @src: source
 * Return: pointer to destination
*/

char *_strcpy(char *dest, char *src)
{
	char *buffer = dest;
	
	for (int i = 0; src[i] != '\0'; i++)
	{
		*buffer = src[i];
		buffer++;
	}

	*buffer = '\0';
	return (dest);
}
