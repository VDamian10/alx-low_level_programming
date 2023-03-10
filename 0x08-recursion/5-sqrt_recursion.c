#include "main.h"
/**
 * check - entry point
 * @sn: squared number
 * @o: number variable
 *
 * checks for the square root of a given number
 *
 * Return: int
*/
int check(int sn, int o)
{
	if ((o * o) == sn)
	{
		return (o);
	}

	else if ((o * o) < sn)
	{
		return (-1);
	}

	return (check(o + 1, sn));
}


/**
 * _sqrt_recursion - entry point
 * @n: number to check
 *
 * a function that returns the natural square root of a number
 *
 * Return: int
*/
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}

	return (check(n, 1));
}
