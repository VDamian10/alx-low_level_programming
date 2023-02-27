#include "main.h"
/**
 * _strlen - entry point
 * @s: string
 *
 * a function that checks the length of a string
 *
 * Return: length
*/
int _strlen(char *s)
{
	int length = 0;

	for (*s != '\0'; length <= *s; length++)
	{
		s++;
	}

	return (length);
}
