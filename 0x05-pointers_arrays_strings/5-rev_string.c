#include "main.h"
/**
 * rev_string - entry point
 * @s: string
 * function to print a string in reverse
*/
void rev_string(char *s)
{
	int len, i, j;
	char tmp;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	i = len - 1;
	j = 0;

	while (j < i)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
		j++;
		i--;
	}
}
