#include "main.h"
/**
 * _print_rev_recursion - entry point
 * @s: string
 *
 * a function that prints a string in reverse
 *
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);

}
