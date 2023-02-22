#include "main.h"
/**
 * times_table - entry point
 *
 * this program prints out the nine times table
 *
 * Return: 0
 *
*/
void times_table(void)
{
	int number, times, result;

	for (number = 0; number <= 9; number++)
	{
		_putchar('0');
		for (times = 1; times <= 9; times++)
			_putchar(',');
			_putchar(' ');

		result = number * times;

		if (result <= 9)
			_putchar(' ');

		else
			_putchar((result / 10) + '0');
	}

		_putchar((result % 10) + '0');
}
