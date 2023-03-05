#include "main.h"
/**
 * reverse_array - entry point
 * @a: array of integers
 * @n: number of elements of array
 *
*/
void reverse_array(int *a, int n)
{
	int o, lastchar;

	for (o = 0; a[o] != '\0'; o++)
	{
		if (n <= a[o])
		{
			a[o] == a[n];
			lastchar = a[n] - 1;
		}

		if (n > a[o])
		{
			lastchar = a[o] - 1;
		}
	}

	for (lastchar = (a[o] - 1 || a[n] - 1); lastchar >= 0; lastchar--)
	{
		;
	}
}
