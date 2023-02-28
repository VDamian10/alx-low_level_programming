#include "main.h"
/**
 * puts_half - entry point
 * @str: string
*/
void puts_half(char *str)
{
	int slength, n, i;

	for (slength = 0; *str != '\0'; slength++)
	{
		str++;
	}

	if (slength % 2 == 0)
	{
		for (i = slength / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}

	else
		for (n = (slength - 1) / 2; str[n] != '\0'; n++)
		{
			_putchar(str[n]);
		}

	_putchar('\n');

}
