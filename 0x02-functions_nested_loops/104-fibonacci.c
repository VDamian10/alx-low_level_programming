#include <stdio.h>

/**
 * main - prints first 98 fibonacci starting with 1 and 2
 * Return: 0
*/

int main(void)
{
	unsigned long prev = 1, next = 2, fibnum;
	int count = 0;

	for (int i = 1; i <= 98; i++)
	{
		count++;

		if (count <= 2)
		{
			printf("%d, ", i);
		}

		if (count > 2)
		{
			fibnum = prev + next;

			if (i == 98)
				printf("%lu\n", fibnum);

			else
				printf("%lu, ", fibnum);

			prev = next;
			next = fibnum;
		}
	}

	return (0);
}
