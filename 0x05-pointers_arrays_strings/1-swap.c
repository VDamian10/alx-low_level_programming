#include "main.h"
/**
 * swap_int - entry point
 * @a: one integer
 * @b: another integer
 *
 * a function that swaps the values of 2 integers
*/
void swap_int(int *a, int *b)
{
	int o;

	o = *a;
	*a = *b;
	*b = o;
}
