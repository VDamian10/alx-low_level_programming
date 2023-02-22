#include "main.h"
/**
 * print_last_digit - entry point
 *
 * @n: could be any given number
 *
 * this program prints the last digit of a given number
 *
 * Return: value of the last digit
*/
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (n <= 0 || n >= 0)
		_putchar(last_digit);

	return (last_digit);
}
