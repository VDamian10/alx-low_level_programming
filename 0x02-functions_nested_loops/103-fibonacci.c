#include <stdio.h>

/**
 * main - prints sum of even-valued fibonacci terms under 4000000
 * starting with 1 and 2
 *
 * Return: 0
*/

int main(void)
{
	unsigned long prev = 1, next = 2, fibnum, evenum = 0;
	int count = 0;

	for (int i = 1; i < 50; i++)
	{
		count++;

		if (count <= 2)
		{
			if (i % 2)
				evenum += i;
		}

		if (count > 2)
		{
			fibnum = prev + next;

			if (fibnum % 2 && fibnum <= 4000000)
				evenum += fibnum;

			prev = next;
			next = fibnum;
		}
	}

	printf("%lu\n", evenum);
	return (0);
}
