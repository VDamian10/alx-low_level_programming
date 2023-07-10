#include "main.h"

/**
 * set_bit - sets a bit to 1 at the index
 * @n: input
 * @index: index in base 2 number
 * Return: 1 if successful or -1 otherwise
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int rtp;

	if (!n)
		return (-1);

	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);

	rtp = 1 << index;

	*n = *n | rtp;

	return (1);
}
