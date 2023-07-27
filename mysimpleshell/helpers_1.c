#include "shell.h"

/**
 * _realloc - reallocates a block of memory
 * @ptr: pointer to the previously allocated block of memory
 * @old_size: size of ptr
 * @new_size: size of the new block of memory to be allocated
 *
 * Return: pointer to the address of the new memory block
 */
void *_realloc(void *ptr, size_t old_size, size_t new_size)
{
	void *tmp_block;
	size_t i;

	if (ptr == NULL)
	{
		tmp_block = malloc(new_size);
		return (tmp_block);
	}
	else if (new_size == old_size)
		return (ptr);
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		tmp_block = malloc(new_size);
		if (tmp_block != NULL)
		{
			for (i = 0; i < min(old_size, new_size); i++)
				*((char *)tmp_block + i) = *((char *)ptr + i);
			free(ptr);
			return (tmp_block);
		}
		else
			return (NULL);

	}
}

/**
 * _getline - Read a line from a file stream
 * @lineptr: pointer to the buffer storing the read line
 * @n: pointer to the size of the buffer
 * @stream: pointer to the input file stream
 *
 * Return: Number of chars read or -1 otherwise
*/

ssize_t _getline(char **lineptr, size_t *n, FILE *stream)
{
	char *new_line;
	static char buff[BUFSIZ];
	static size_t buf_index/* = 0 */;
	static size_t buf_size /*= 0 */;
	ssize_t chars_read = 0;
	size_t line_length = 0;

	if (lineptr == NULL || n == NULL || stream == NULL)
		return (-1);

	if (*lineptr == NULL || *n == 0) {
		*n = BUFSIZ;
		*lineptr = malloc(*n);
		if (*lineptr == NULL)
			return (-1);
	}

	while (1)
	{
		if (buf_index >= buf_size)
		{
			buf_index = 0;
			buf_size = read(fileno(stream), buff, BUFSIZ);
			if (buf_size <= 0)
				break;
		}

		(*lineptr)[line_length++] = buff[buf_index++];

		if (line_length >= *n - 1)
		{
			*n *= 2;
			new_line = _realloc(*lineptr, *n / 2, *n);
			if (new_line == NULL)
			{
				free(*lineptr);
				return (-1);
			}
			*lineptr = new_line;
		}

		if ((*lineptr)[line_length - 1] == '\n')
		{
			chars_read = line_length;
			break;
		}
	}

	if (line_length == 0 && chars_read <= 0)
		return (-1);

	(*lineptr)[line_length] = '\0';
	return (chars_read);
}

/**
 *_strtok - tokenizes a string
 *@str: string to be tokenized
 *@delim: delimiter to be used to tokenize the string
 *@save_ptr: pointer to be used to keep track of the next token
 *
 *Return: The next available token
 */
char *_strtok(char *str, const char *delim, char **save_ptr)
{
	char *token_start;
	char *token_end;

	if (str != NULL)
		*save_ptr = str;

	if (*save_ptr == NULL || **save_ptr == '\0')
		return (NULL);

	token_start = *save_ptr;
	token_end = *save_ptr;

	while (*token_end != '\0')
	{
		if (_strchr(delim, *token_end) != NULL)
		{
			*token_end = '\0';
			*save_ptr = token_end + 1;
			return (token_start); /* break; */
		}
		token_end++;
	}
	*save_ptr = token_end;
	return (token_start);
}

/**
 * _strchr - Locate the first occurrence of a character in a string
 * @s: Pointer to the input string
 * @c: The character to be located
 *
 * Return: Pointer to the first occurrence of 'c' in 's', or NULL if not found
 */
char *_strchr(const char *s, int c)
{
	if (s == NULL)
		return (NULL);

	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}

	if (*s == c)
		return ((char *)s);

	return (NULL);
}

/**
 * _strlen - counts string length
 * @str: pointer to the string
 *
 * Return: the string length
*/

int _strlen(char *str)
{
	int len = 0;

	if (str == NULL)
		return (len);

	for (; str[len] != '\0'; len++)
		;

	return (len);
}
