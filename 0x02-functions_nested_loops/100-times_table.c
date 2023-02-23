#include "main.h"
/**
 * print_times_table - entry point
 *
 * @n: number to have a times table built out for
 *
 * this program prints the times table of value n
 *
*/
void print_times_table(int n)
{
	int num1, num2, answer;

	if (n <= 15 && n >= 0)
	{
		for (num1 = 0; num1 <= n; num1++)
		{
			_putchar('0');

			for (num2 = 1; num2 <= n; num2++)
			{
				_putchar(44);
				_putchar(32);

				answer = num1 * num2;

				if (answer <= 9)
					_putchar(32);

				if (answer >= 10 && answer <= 99)
				{
					_putchar((answer / 10) + '0');
				}
				else if (answer >= 100)
				{
					_putchar((answer / 100) + '0');
					_putchar(((answer / 10) % 10) + '0');
				}
				_putchar((answer % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
