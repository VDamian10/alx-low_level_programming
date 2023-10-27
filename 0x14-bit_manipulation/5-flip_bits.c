#include "main.h"

/**
 * flip_bits - calulates how many bits flips to change a
 * number from one to another in binary
 * @n: one number
 * @m: second number
 * Return: number of flips required
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;

	if (n == 0 && m == 0)
		return (0);

	while (n)
	{
		if ((n ^ m) & 1)
			i++;

		n >>= 1;
		m >>= 1;
	}
	return (i);
}
