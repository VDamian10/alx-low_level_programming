#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates arguments
 * @ac: arg count or number
 * @av: argument list
 * Return: pointer to a string
*/
char *argstostr(int ac, char **av)
{
	char *newstr;
	int i = 0, a, b;
	int count = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		if (av[a] == NULL)
			return (NULL);

		for (b = 0; av[a][b]; b++)
		{
			count++;
		}
		count++;
	}
	count++;

	newstr = malloc(sizeof(char) * count);
	if (!newstr)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			newstr[i++] = av[a][b];
		}
		newstr[i++] = '\n';
	}
	newstr[i] = '\0';

	return (newstr);
}
