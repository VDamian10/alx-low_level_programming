#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _atoi - converst a string to an integer
 * @s: string
 * Return: integer
*/

int _atoi(char *s)
{
	int i, min = 1;
	unsigned int num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
//		if (s[i] < '0' || s[i] > '9')
//		{
		if (s[i] == '-')
			min *= -1;
//		}

		if (s[i] >= '0' && s[i] <= '9')
		{
			while (s[i] >= '0' && s[i] <= '9')
			{
				num = num * 10 + (s[i] - '0');
				i++;
			}

			break;
		}
	}

	return (num * min);
}
