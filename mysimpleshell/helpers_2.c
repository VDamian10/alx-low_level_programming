#include "shell.h"

/**
 * _strcpy - copies a string
 * @dest: the destination
 * @src: the source
 *
 * Return; the destination
*/

char* _strcpy(char* dest, char* src)
{
	char *dest_ptr = dest;

	while (*src != '\0')
		*dest_ptr++ = *src++;
	dest_ptr = '\0';

	return (dest);
}
