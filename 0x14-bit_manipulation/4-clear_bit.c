#include "main.h"

/**
 * clear_bit - sets the bit value to 0
 * @n: input
 * @index: bit index
 * Return: 1 if successful or -1 otherwise
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int rtp;

	if (!n || index > 63)
		return (-1);

	rtp = 1UL << index;

	*n &= ~rtp;

	return (1);
}
