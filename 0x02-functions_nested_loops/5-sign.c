#include "main.h"
/**
 * print_sign - entry baby
 * @n: the number
 *
 * this program prints the sign of a number
 *
 * Return: -1 if less than zero, 1 if more than zero, and 0 if zero
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('\n');
}
