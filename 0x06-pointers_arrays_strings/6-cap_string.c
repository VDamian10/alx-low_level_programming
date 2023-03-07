#include "main.h"
/**
 * cap_string - entry point
 * @str: string
 *
 * capitalize the first character of every word in a string
 *
 * Return: string
*/
char *cap_string(char *str)
{
	int o = 0;

	while (str[o] != '\0')
	{
		if (o == 0)
		{
			if (str[o] <= 'z' && str[o] >= 'a')
			{
				str[o] -= 32;
				continue;
			}
		}

		if (str[o] == ' ')
		{
			o++;

			if (str[o] <= 'z' && str[o] >= 'a')
			{
				str[o] -= 32;
				continue;
			}
		}

		else
			if (str[o] <= 'Z' && str[o] >= 'A')
			{
				str[o] += 32;
			}

		o++;
	}

	return (str);
}
