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
	int num1, num2, answer;
	double tens, units;

	answer = num1 * num2;
	tens = answer / 10;
	units = answer % 10;

	for (num1 = 0; num1 <= 9; num1++)
	{

		for (num2 = 0; num2 <= 9; num2++)
		{
			if (num2 == 0)
				_putchar('0');

			else if (answer < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(units);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(tens);
				_putchar(units);
			}
		}
	_putchar('\n');
	}
}
