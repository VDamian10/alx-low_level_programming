#include "main.h"
/**
 * more_numbers - entry point
 *
 * prints 10 times the numbers, from 0 to 14, followed by a new line
 *
*/
void more_numbers(void)
{
	int n, tens, units, v;

	for (n = 0; n < 10; n++)
	{
		for (v = 0; v < 14; v++)
		{
			tens = v / 10;
			units = v % 10;

			if (v >= 10)
			{
				_putchar(tens + '0');
			}
			_putchar(units + '0');
		}
	}
	_putchar('\n');
}
