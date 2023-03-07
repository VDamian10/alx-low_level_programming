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
	char no[] = {" \t\n,;.!?\"(){}"};
	int v;

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

		for (v = 0; no[v] != '\0'; v++)
		{
			if (str[o] == no[v])
			{
				o++;
			}

			if (str[o] <= 'z' && str[o] >= 'a')
			{
				str[o] -= 32;
				continue;
			}
		}
/*
*		else
*			if (str[o] <= 'Z' && str[o] >= 'A')
*			{
*				str[o] += 32;
*			}
*/
		o++;
	}

	return (str);
}
