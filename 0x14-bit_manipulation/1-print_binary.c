#include "main.h"

/**
 * print_binary - prints the binary number from dec
 * @n: input
 * Return: nothing
*/

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar(n & 1 ? '1' : '0');
}
