#include "main.h"
/**
 * print_most_numbers - entry point
 *
 * a program that prints the number from 0 to 9 followed by a new line
 *
*/
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
