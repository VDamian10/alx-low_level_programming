#include "main.h"
/**
 * more_numbers - entry point
 *
 * prints 10 times the numbers, from 0 to 14, followed by a new line
 *
*/
void more_numbers(void)
{
	int n, tens, units;

	for (n = 0; n <= 14; n++)
	{
		if (n >= 10)
		{
			_putchar('1');
		}
		_putchar((n % 10) + '0');
	}
	_putchar('\n');
}
