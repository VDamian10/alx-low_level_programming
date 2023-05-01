#include <stdio.h>
#include "function_pointers.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_name("Bob", &pme);
	printf("\n");
	return (0);
}
