#include "main.h"

/**
 * is_palindrome - entry point
 * @s: string
 * Return: 1 if palindrome or 0 otherwise
*/

int is_palindrome(char *s)
{
	int count = 0;
	int last;

	if (!s)
	{
		return (0);
	}

	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	last = i - 1;

	for (int a = 0; a < last; a++, last--)
	{
		if (s[a] != s[last])
		{
			return (0);
		}
	}

	return (1);
}
