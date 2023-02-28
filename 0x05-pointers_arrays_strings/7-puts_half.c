#include "main.h"
/**
 * puts_half - entry point
 * @str: string
*/
void puts_half(char *str)
{
	int slength, n;

	for (slength = 0; *str != '\0'; slength++)
	{
		str++;
	}

	if (slength % 2 != 0)
	{
		n = (slength - 1) / 2;
		_putchar(str[n]);
		n++;
	}

	else
	{
		n = slength / 2;
		_putchar(str[n]);
		n++;
	}

	_putchar('\n');

}
