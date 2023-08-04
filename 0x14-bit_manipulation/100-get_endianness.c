#include "main.h"

/**
 * get_endianness - gets the endiance for the system
 * Return: 1 if its little-endianness or 0 otherwise
*/

int get_endianness(void)
{
	int i = 1;
	char *j = (char *)&i;

	return (*j);
}
