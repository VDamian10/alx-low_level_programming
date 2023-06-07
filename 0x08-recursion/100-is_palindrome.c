#include "main.h"

/**
 * is_palindrome - entry point
 * @s: string
 * Return: 1 if palindrome or 0 otherwise
*/

int is_palindrome(char *s)
{
	int a, i;
	int last;

	if (!s)
	{
		return (0);
	}

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	last = i - 1;

	for (a = 0; a < last; a++, last--)
	{
		if (s[a] != s[last])
		{
			return (0);
		}
	}

	return (1);
}
