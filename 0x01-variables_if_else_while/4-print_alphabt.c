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
	if (god != 'e' && god != 'q')
	{
		putchar(god);
	}
	return (0);
}

