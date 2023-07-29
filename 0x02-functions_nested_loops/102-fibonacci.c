#include <stdio.h>

/**
 * main - prints first 50 fibonacci starting with 1 and 2
 * Return: 0
*/

int main(void)
{
	unsigned long prev = 1, next = 2, sum;
	int count = 0;

	for (int i = 1; i <= 50; i++)
	{
		count++;

		if (count <= 2)
		{
			printf("%d, ", i);
		}

		if (count > 2)
		{
			sum = prev + next;

			if (i == 50)
				printf("%lu\n", sum);

			else
				printf("%lu, ", sum);

			prev = next;
			next = sum;
		}
	}

	return (0);
}
