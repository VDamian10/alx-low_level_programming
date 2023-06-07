#include "main.h"

/**
 * is_prime_number - entry
 * @n: number to check
 * Return: 1 if prime or 0 otherwise
*/
int is_prime_number(int n)
{
	if ((n <= 1) || ((n % 2) == 0))
	{
		return (0);
	}

	if (n == 2)
	{
		return (1);
	}

	for (int i = 3; i < n / 2; i += 2)
	{
		if ((n % i) == 0)
		{
			return (0);
		}
	}

	return (1);
}
