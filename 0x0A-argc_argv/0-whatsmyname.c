#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * @argc: arg count
 * @argv: arguments
 *
 * Return: 0
*/
int main(int argc, char *argv[])
{
	if (*argv[argc] != '\0')
	{
		printf("%s\n", argv[argc]);
		argc++;
	}

	return (0);
}
