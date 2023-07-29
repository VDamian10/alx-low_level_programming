#include "main.h"
#include <stdio.h>

/**
 * print_array - entry point
 * @a: array
 * @n: number of elements
*/

void print_array(int *a, int n)
{
	for (int i = 0; a[i] != '\0'; i++)
	{
		if (i < n - 1)
			printf("%d, ", a[i]);

		if (i == n - 1)
			printf("%d\n", a[i]);
	}
}
