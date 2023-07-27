#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <unistd.h>
#include <errno.h>
#include <dirent.h>
#include <signal.h>

#define min(x, y) (((x) < (y)) ? (x) : (y))

/* Core functions */
char *read_input(void);
void parse_input(char *input, char **command, char ***arguments);
void execute_command(char *command, char **arguments);

/* Built-in functions */

/* Helper functions */
void *_realloc(void *ptr, size_t old_size, size_t new_size);
ssize_t _getline(char **lineptr, size_t *n, FILE *stream);
char *_strtok(char *str, const char *delim, char **save_ptr);
char *_strchr(const char *s, int c);
int _strlen(char *str);
char *_strcpy(char *dest, char *src);

int main(int ac __attribute__((unused)), char **av __attribute__((unused)));

/* int main(void); */

#endif
