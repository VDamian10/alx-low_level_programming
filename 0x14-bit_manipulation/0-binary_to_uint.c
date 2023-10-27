#include "main.h"

/**
 * binary_to_uint - converts a biary number to unsigned int
 * @b: string containing numbers
 * Return: unsigned int value of binary
*/

unsigned int binary_to_uint(const char *b)
{
	int i, j, len = 0;
	unsigned int result, num, sum = 0;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		len++;
	}

	for (j = 0; b[j] != '\0'; j++)
	{
		num = b[j] - '0';
		result = 1 << (len - 1);
		sum += num * result;
		len--;
	}
	return (sum);
}
