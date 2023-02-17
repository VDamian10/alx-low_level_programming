#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Description: This program will assign a random number to the variable n
 *
 * Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Please type a number: \n");
	scanf("%d\n", &n);

	if (n >= 0)
	{
		if (n == 0)
		{
		printf("%d is zero\n", n);
		}
		else
		{
		printf("%d is positive\n", n);
		}
	}
	else
	{
	printf("%d is negative\n", n);
	}
	return (0);
}
