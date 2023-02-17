#include <stdio.h>
/**
 * main -entry point
 *
 * Return: 0
*/
int main(void)
{
	char god;

	for (god = 'z'; god >= 'a'; god--)
		putchar(god);

	putchar('\n');

	return (0);
}
