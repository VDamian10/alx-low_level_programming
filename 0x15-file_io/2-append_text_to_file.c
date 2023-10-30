#include "main.h"

/**
 * append_text_to_file - appends text to a file
 * @filename: name of the file
 * @text_content: content to be written into file
 * Return: 1 on success or -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, l = 0, new_file;

	if (!filename)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			l++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	new_file = write(fd, text_content, l);
	if (new_file == -1)
		return (-1);

	close(fd);
	return (1);
}
