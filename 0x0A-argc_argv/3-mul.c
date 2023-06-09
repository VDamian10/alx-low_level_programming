#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main -multiplies two numbers
 * @argc: argument number
 * @argv: array
 *
 * Return: sum
*/
int main(int argc, char *argv[])
{
	int num1, num2, sum;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	sum = num1 * num2;

	printf("%d\n", sum);
	return (0);
}
