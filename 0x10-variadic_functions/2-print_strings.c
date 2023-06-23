#include "variadic_functions.h"

/**
 * print_strings - Prints strings passed to the function separed by separators
 * @separator: A string that is used to separate strings
 * @n: number of unnamed parameters
 * Return: Always 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list param;
	char *nil = "(nil)", *str;

	if (!separator)
		separator = "";

	va_start(param, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(param, char *);

		if (!str)
			str = nil;

		printf("%s", str);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(param);
}
