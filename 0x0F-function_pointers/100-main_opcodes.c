#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: integer
 * @argv: array of strings
 *
 * Description: print opcodes of a number of
 * bytes of main function
 *
 * Return: returns 0 (Success)
 */

int main(int argc, char **argv)
{
	int n_bytes, i;
	char *s = (char *) main;

	if (argc != 2)
	{
		puts("Error");
		exit(1);
	}

	n_bytes = atoi(argv[1]);
	if (n_bytes < 0)
	{
		puts("Error");
		exit(2);
	}

	for (i = 0; i < n_bytes; i++)
	{
		printf("%02x", s[i] & 0xff);

		if (i + 1 != n_bytes)
			printf(" ");
	}

	printf("\n");

	return (0);
}
