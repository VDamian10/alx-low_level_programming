#include "main.h"
#include <stddef.h>

/**
 * puts_half - prints the second half of a string
 * @str: string to be printed
 * Return: nothing
*/

void puts_half(char *str)
{
	if (!str)
		return;

	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (int i = len / 2; i < len; i++)
			_putchar(str[i]);
	}

	else
	{
		for (int x = (len - 1) / 2; x < len; x++)
			_putchar(str[x]);
	}

	_putchar('\n');
}
