#ifndef MAIN_H
#define MAIN_H
/**
 * slen - calculates string length for concatenation
 * @s: string
 * Return: length
*/
int slen(char *s)
{
	int i;

	if (!s)
		return (0);

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
int _putchar(char c);
char *argstostr(int ac, char **av);
char **strtow(char *str);
char *argstostr(int ac, char **av);

#endif
