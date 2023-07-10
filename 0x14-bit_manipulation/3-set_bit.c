#include "main.h"

/**
 * set_bit - sets a bit to 1 at the index
 * @n: input
 * @index: index in base 2 number
 * Return: 1 if successful or -1 otherwise
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int *tmp, rtp;
	unsigned int count, bits = 0;
	int i;

	if (!n)
		return (-1);

	tmp = n;
	while (tmp)
	{
		*tmp >>= 1;
		bits++;
	}

	if (index > 63)
		return (-1);

	if (index > bits)
		return (-1);

	count = 0;
	for (i = bits - 1; i >= 0; i--)
	{
		rtp = 1 << (bits - i - 1);

		if (index == count)
		{
			*n = (*n | rtp);
		}
		count++;
	}
	return (1);
}
