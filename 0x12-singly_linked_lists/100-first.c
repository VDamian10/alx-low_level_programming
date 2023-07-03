#include "lists.h"

void __attribute__((constructor)) beforemain(void);

/**
 * beforemain - prints a sentence before exe of main function
 * Return: nothing
*/

void beforemain(void)
{
	printf(
			"You're beat! and yet, you must allow,\nI bore my house upon my back!\n"
			);
}
