#include "main.h"
/**
 * print_alphabet_x10 - program
 *
*/
void print_alphabet_x10(void)
{
	char alphabet;
	int i = 0;

	while (i++ <= 10)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
			_putchar('\n');
		}
	}

}
