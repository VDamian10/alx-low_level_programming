#include "main.h"

/**
 * puts2 - entry
 * @str: string
 *
 * prints every other character, starting with first, followed by a new line
*/

void puts2(char *str)
{
	for (int i =  0; str[i] != '\0'; i++)
	{

		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
