#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * checkwords - counts number of words
 * @str: string to be checked
 * Return: number of words
*/

int checkwords(char *str)
{
	int i, count = 0;

	if (!str)
		return (0);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' && str[i - 1] != ' ')
		{
			count++;
			i++;
		}
	}

	count++;
	return (count);
}

/**
 * strtow - splits a string into words
 * @str: string to be split
 * Return: pointer to a pointer
*/

char **strtow(char *str)
{
	char **strarray;
	int x = 0, length, y, j, start;

	if (!str || *str == '\0')			/* checking if str is NULL or an empty space */
		return (NULL);

	strarray = malloc(sizeof(char *) * (checkwords(str) + 1));

	if (!strarray)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)		/* storing words in prev allocated memory */
	{
		if (str[j] != ' ')			/* handling only chars that are not spaces */
		{
			start = j;			/* setting starting point for first word */

			while (str[j] != ' ' && str[j] != '\0')			/*incrementing to the next word */
				j++;

			length = j - start;			/* determining length of the word to store */
			strarray[x] = malloc(sizeof(char) * (length + 1));

			if (!strarray[x])
			{
				for (y = 0; y < x; y++)
					free(strarray[y]);

				free(strarray);
				return (NULL);
			}

			strncpy(strarray[x], &str[start], length);	/* copying into array element */
			strarray[x][length] = '\0';
			x++;
		}
	}
	strarray[x] = NULL;			/* assigning last element of the array */
	return (strarray);
}
