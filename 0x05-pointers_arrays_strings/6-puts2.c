#include "main.h"
/**
 * puts2 - entry
 * @str: string
 *
 * prints every other character, starting with first, followed by a new line
*/
void puts2(char *str)
{
	int slength = 0;

	while (str[slength] != '\0')
	{
		_putchar(str[slength]);

		if (slength % 2 == 0)
		{
			_putchar(str[slength]);
			slength++;
		}
		_putchar('\n');
	}

}
