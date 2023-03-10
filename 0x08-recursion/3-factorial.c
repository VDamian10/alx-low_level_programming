#include "main.h"
/**
 * factorial - entry point
 * @n: number
 *
 * returns the factorial of a given number
 *
 * Return: int
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	else
	{
		return (n * factorial(n - 1));
	}

}
