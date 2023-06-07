#include "main.h"

/**
 * is_prime_number - entry
 * @n: number to check
 * Return: 1 if prime or 0 otherwise
*/

int is_prime_number(int n)
{
	int count = 0;

	if (n <= 1)
	{
		return (0);
	}

	for (int i = 1; i <= n / 2; i++)
	{
		if ((n % i) == 0)
		{
			count++;
		}
	}

	if (count > 1)
		return (0);

	else
		return (1);

}
