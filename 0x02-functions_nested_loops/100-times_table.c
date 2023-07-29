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
	if (n >= 0 && n <= 15)
	{
		for (int i = 0; i <= n; i++)
		{
			_putchar('0');
			
			for (int j = 1; j <= n; j++)
			{
				int fig = i * j;

				if (fig >= 0 && fig <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(fig + '0');
				}

				if (fig > 9 && fig <= 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(((fig / 10) % 10) + '0');
					_putchar((fig % 10) + '0');
				}

				if (fig > 99 && fig < 1000)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(((fig / 100) % 10) + '0');
					_putchar(((fig / 10) % 10) + '0');
					_putchar((fig % 10) + '0');
				}
			}


			_putchar('\n');
		}
	}
}
