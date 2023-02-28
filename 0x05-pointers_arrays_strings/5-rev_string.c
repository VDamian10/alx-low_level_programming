#include "main.h"
/**
 * rev_string - entry point
 *
 * @s: string
 * function to print a string in reverse
*/
void rev_string(char *s)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}

	j = 0;

	while (*s != '\0')
	{
		j++;
		s++;
	}

	for (j = j - 1; *s >= 0; j--)
	{
		_putchar(s[j]);
	}

}
