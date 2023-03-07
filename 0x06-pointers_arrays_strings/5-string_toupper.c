#include "main.h"
/**
 * string_toupper - entry point
 * @str: string
 * changes all lower case letters to upper case
 *
 * Return: string
*/
char *string_toupper(char *str)
{
	/* to roll out the string */

	int o = 0;

	while (str[o] != '\0')
	{
		/* if characters are lowercase */

		if (str[o] <= 'z' && str[o] >= 'a')
		{
			/* subtract 32 from ascii value */

			str[o] -= 32;
		}

		o++;
	}

	return (str);
}
