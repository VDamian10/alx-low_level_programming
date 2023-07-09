#include "main.h"

/**
 * get_bit - retrieves the bit value at index
 * @n: input number
 * @index: index to get bit value
 * Return: bit value or -1
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int tmp;
	unsigned int rtp, count, bits = 0;
	int i;

	tmp = n;
	while (tmp)
	{
		tmp >>= 1;
		bits++;
	}

	/* printf("The value of index here is: %u\n", index); */
	/* printf("The value of bits here is: %u\n", bits); */

	if (index > 63)
		return (-1);

	if (index > bits)
		return (0);

	count = 0;
	for (i = bits - 1; i >= 0; i--)
	{
		rtp = 1 << (bits - i - 1);
		if (index == count)
			return ((n & rtp) ? 1 : 0);

		count++;
	}
	return (-1);
}
