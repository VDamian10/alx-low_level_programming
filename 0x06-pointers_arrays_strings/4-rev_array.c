#include "main.h"
/**
 * reverse_array - entry point
 * @a: array of integers
 * @n: number of elements of array
 *
*/
void reverse_array(int *a, int n)
{
	int lastchar = n - 1;
	int x;
	int o[100];

	for (x = 0; x < n; x++)
	{
		o[x] = a[lastchar];
		lastchar--;
	}
}
