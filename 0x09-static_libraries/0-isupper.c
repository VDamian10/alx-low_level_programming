#include "main.h"
/**
 * _isupper - entry point
 *
 * a function that checks for upper case letter
 * @c: letter to be checked
 *
 * Return: 1 if c is uppercase and 0 otherwise
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
