#include "main.h"
/**
 * reverse_array - entry point
 * @a: array of integers
 * @n: number of elements of array
 *
*/
void reverse_array(int *a, int n)
{
	int o, tmp, l;

	for (o = 0, l = n - 1; a[o] <= n && l >= 0; o++, l--)
	{
		tmp = a[o];
		a[o] = a[l - 1];
		a[l - 1] = tmp;

		if (o == l)
		{
			break;
		}
	}
}
