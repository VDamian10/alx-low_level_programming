#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
*/
int main(void)
{
	int x;
	char god;

	for (x = 0; x < 10; x++)
		putchar((x % 10) + '0');

	for (god = 'a'; god <= 'f'; god++)
		putchar(god);

	putchar('\n');

	return (0);
}
