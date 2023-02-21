#include "main.h"
/**
 * print_alphabet - entry
 *
*/
void print_alphabet(void);

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);
	_putchar('\n');
}
