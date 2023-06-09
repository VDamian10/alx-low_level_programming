#include "main.h"
/**
 * _islower - program that checks if a character is lowercase
 * @c: number being checked
 * Return: 0 if not lowercase and 1 if lowercase
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else
		return (0);
}
