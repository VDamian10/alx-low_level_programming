#include <stdio.h>

/**
 * main - prints all possible combos of 2 2 digit nums
 * Return: 0
*/

int main(void)
{
	int dig1, dig2;

	for (dig1 = 0; dig1 < 100; dig1++)
	{
		for (dig2 = dig1 + 1; dig2 < 100; dig2++)
		{
			putchar((dig1 / 10) + '0');
			putchar((dig1 % 10) + '0');
			putchar(' ');
			putchar((dig2 / 10) + '0');
			putchar((dig2 % 10) + '0');

			if (dig1 == 98 && dig2 == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
