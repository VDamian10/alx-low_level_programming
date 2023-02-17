#include <stdio.h>
/**
 * main -entry point
 *
 * Return: 0
*/
int main(void)
{
	int a;

	for (a = 1; a < 10; a++)
		putchar((a % 10) + '0');

	putchar('\n');

	return (0);
}
