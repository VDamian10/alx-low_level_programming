#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 * @argc: arg count
 * @argv: arg vectors
 * Return: lowest number of coins to make change
*/
int main(int argc, char *argv[])
{
	int result = 0, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int coins[] = {5, 2, 10, 1, 25};
	int cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	int lowest = cents / coins[0], totaL = 0;

	for (i = 0; cents > 0 && i < (sizeof(coins) / sizeof(coins[0])); i++)
	{
			if (cents / coins[i] < lowest)
			{
				lowest = cents / coins[i];
				result = cents % coins[i];
			}

			if (i == sizeof(coins) / sizeof(coins[0]) && result != 0)
			{
				totaL += lowest;
				cents = result;
				lowest = cents / coins[0];
				i = 0;
			}
	}
	totaL += lowest;

	printf("%d\n", totaL);
	return (0);
}
