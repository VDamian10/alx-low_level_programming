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

	int totaL = 0;
	
	for (int i = 0; cents >= 0 && i < (sizeof(coins) / sizeof(coins[0])); i++)
	{
		if (cents / coins[i] < lowest)
		{
			lowest = cents / coins[i];
			
			int result = cents % coins[i];
			
			if (lowest == 1)
			{
				if (result != 0)
				{
					cents = result;
					i = 0 - 1;
					totalnumofl += lowest;
					lowest = cents / coins[0];
				}
			}
		}
	}
	printf("%d\n", totalnumofl);
	return (0);
}
