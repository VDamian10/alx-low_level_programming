#include "main.h"
/**
 * rev_string - entry point
 *
 * @s: string
 * function to print a string in reverse
*/
void rev_string(char *s)
{
	int strel, slength, revorder;

	strel = 0;
	while (s[strel] != '\0')
	{
		_putchar(s[strel]);
		strel++;
	}

	slength = 0;

	while (*s != '\0')
	{
		s++;
		slength++;
	}

	for (revorder = slength - 1; revorder >= 0; revorder--)
	{
		_putchar(revorder);
	}

}
