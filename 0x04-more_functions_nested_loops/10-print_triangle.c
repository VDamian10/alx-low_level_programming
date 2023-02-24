#include "main.h"
/**
 * print_triangle - entry
 *
 * @size: size of triangle
 *
*/
void print_triangle(int size)
{
	int a, b, c;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size - a; b++)
			{
				_putchar(32);
			}

			for (c = 1; c <= a; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

	else
	{
		_putchar('\n');
	}
}
