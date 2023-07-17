#include "main.h"


/**
 * read_textfile - reads a file
 * @filename: name of the file to read
 * @letters: number of bytes to read
 * Return: number bytes read or -1
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, readme = 0, writeme = 0;
	char *buff;

	if (!filename || letters == 0)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	readme = read(fd, buff, letters);
	if (readme == -1)
		return (0);

	writeme = write(fd, buff, letters);

	free(buff);
	close(fd);
	return (0);
}
