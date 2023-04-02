#include "main.h"
/**
 * rev_string - entry point
 * @s: string
 * function to print a string in reverse
*/
void rev_string(char *s)
{
	int strel, slen, rev, j;
	char tmp;

	while (s[strel] != '\0')
	{
		strel++;
	}

	slen = strel + 1;

	for (rev = slen - 1, j = 0; j < (slen / 2); rev--, j++)
	{
		tmp = s[rev];
		s[rev] = s[j];
		s[j] = tmp;
	}

}
