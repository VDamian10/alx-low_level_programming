#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*/
char **strtow(char *str)
{
	if (!str || *str == "")
		return (NULL);

	char **newstr = malloc(sizeof(char *) * slen(str));
	
	if (!newstr)
		return (NULL);
	
	int i = 0;
	
	while (str[i] != '\0')
	{
		if (str[i] == " ")
		{
			newstr[
		}

		i++;
	}
}
