#include "main.h"

/**
 * print_binary - prints the binary number from dec
 * @n: input
 * Return: nothing
*/

void print_binary(unsigned long int n)
{
	unsigned int rtp, j, bits = 0;
	unsigned long int tmp;

	if (n == 0)
		_putchar('0');

	tmp = n;
	while (tmp)
	{
		tmp >>= 1;
		bits++;
	}

	for (j = 1; j <= bits; j++)
	{
		rtp = 1 << (bits - j);

		if (n & rtp)
		{
			_putchar('1');
			n -= rtp;
		}
		else
			_putchar('0');
	}
	_putchar('\n');
}
