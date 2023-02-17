#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
*/
int main(void)
{
	char god;

	for (god = 'a'; god <= 'z'; god++)
		putchar(god);

	for (god = 'A'; god <= 'A'; god++)
		putchar(god);

	putchar('\n');

	return (0);
}
