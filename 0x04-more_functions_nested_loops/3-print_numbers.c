#include "main.h"
/**
 * print_numbers - entry point
 *
 * a program that prints numbers from 0 to 9 and then a new line
 *
*/
void print_numbers(void)
{
	char n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n + '0');
		_putchar('\n');
	}
}
