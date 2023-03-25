#include "function_pointers.h"
#include <stdlib.h>
/**
 * pme - prints a name
 * @name: name
 * Return: void
*/
void pme(char *name)
{
	int o = 0;

	while (name[o] != '\0')
	{
		_putchar(name[o]);
		o++;
	}

	_putchar('\n');
}

/**
 * print_name - prints a name
 * @name: name to print
 * @f: pointer to function
 * Return: nothing
*/

void print_name(char *name, void (*f)(char *n))
{
	if (name == NULL)
		return;

	f = pme;

	f(name);
}

