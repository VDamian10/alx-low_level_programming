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

	for (n = 0; n < 15; n++)
	{
		tens = n / 10;
		units = n % 10;

		if (n >= 10)
		{
			_putchar(tens + '0');
		}
		_putchar(units + '0');
	}
	_putchar('\n');
}
