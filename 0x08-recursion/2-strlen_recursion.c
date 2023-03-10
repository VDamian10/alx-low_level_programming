#include "main.h"
/**
 * _strlen_recursion - entry point
 * @s: string
 *
 * Return: string
*/
int _strlen_recursion(char *s)
{
	int o = 0;
	
	if (*s == '\0')
	{
		o++;
		o += _strlen_recursion(s + 1);

	}

	return (o);

}
