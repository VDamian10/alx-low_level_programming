#include "main.h"

/**
 * closeme - closes a file descriptor
 * @x: file descriptor
 * Return: nothing
*/

void closeme(int x)
{
	int closed;

	if (x > 0)
		closed = close(x);

	if (closed == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", x);
		exit(100);
	}
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vectors
 * Return: 0 if successful or -1
*/

int main(int argc, char *argv[])
{
	int cp1, cp2;
	const char *file_to, *file_from;
	char buffer[1024];
	ssize_t readme, writeme;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];

	cp1 = open(file_from, O_RDONLY);
	if (cp1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	cp2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (cp2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((readme = read(cp1, buffer, 1024)) > 0)
	{
		writeme = write(cp2, buffer, readme);
		if (writeme == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	closeme(cp1);
	closeme(cp2);
	return (0);
}
