#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - entry
 * @n: random whole number less than 98
 *
 * this program prints all whole numbers between n and 98
*/
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
		{
			printf("%d, ", n++);

		}
	printf("%d\n", n);
	}

	else
	{
		while (n > 98)
		{
			printf("%d, ", n--);
		}
	printf("%d\n", n);
	}
}
