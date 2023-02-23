#include "main.h"
/**
 * _isdigit - entry point
 * @c: digit to be checked
 *
 * this program checks for a digit between 0 and 9
 *
 * Return: 1 if it is a digit and 0 otherwise
 *
*/
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);

	else
		return (0);
}
