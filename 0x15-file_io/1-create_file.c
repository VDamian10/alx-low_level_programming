#include "main.h"

/**
 * create_file - creates a new file
 * @filename: name of the file
 * @text_content: text to write into the file
 * Return: 1 on success or -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int fd, l = 0, i, new_file;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			l++;
	}

	new_file = write(fd, text_content, l);
	if (!new_file || new_file != l)
		return (-1);

	close(fd);
	return (1);
}
