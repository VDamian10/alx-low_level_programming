#include "main.h"
/**
 * _isalpha - checks for an alphabetic character
 *
 * @c: character being checked
 *
 * Return: 1 if lowercase or uppercase and 0 otherwise
 *
*/
int _isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
		return (1);
	else
		return (0);
}
