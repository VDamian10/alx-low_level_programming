#include "main.h"
/**
 * print_line - entry point
 *
 * @n: number of times
 *
 * a function that drasw a straight line
 *
*/
void print_line(int n)
{
	int v;

	for (v = 0; v < n; v++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
