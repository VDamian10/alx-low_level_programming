#include "main.h"
/**
 * times_table - entry point
 *
 * this program prints out the nine times table
 *
 * Return: void
 *
*/
void times_table(void)
{
	int num1, num2, answer;
	double tens, units;

	for (num1 = 0; num1 <= 9; num1++)
	{

		for (num2 = 0; num2 <= 9; num2++)
		{
			answer = num1 * num2;
			tens = answer / 10;
			units = answer % 10;

			if (num2 == 0)
				_putchar('0');

			else if (answer < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((units) + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((tens) + '0');
				_putchar((units) + '0');
			}
		}
	_putchar('\n');
	}
}
