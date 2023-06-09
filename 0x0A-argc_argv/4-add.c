#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * check - checks if there are non-integers in the string
 * @str: string to check
 * Return: 1 if all characters are digits or 0 otherwise
*/
int check(char *str)
{
	if (*str == '-')
		str++;

	for (int count = 0; str[count] != '\0'; count++)
	{
		if (str[count] < '0' || str[count] > '9')
			return (0);
	}

	return (1);
}


/**
 * main - adds positive integers
 * @argc: argument count
 * @argv: argument vectors
 * Return: sum of arguments
*/

int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc < 2)
	{
		printf("0");
		printf("\n");
		return (0);
	}

	for (int count = 1; count < argc; count++)
	{
		if (!check(argv[count]))
		{
			printf("Error");
			printf("\n");
			return (1);
		}

		sum += atoi(argv[count]);
	}

	printf("%d\n", sum);

	return (0);
}

