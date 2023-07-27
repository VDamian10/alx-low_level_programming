#include "shell.h"

/**
 * read_input - reads user input in the shell
 *
 * Return: the input
*/

char *read_input(void)
{
	char *input = NULL;
	size_t bufsize = 0;

	if (_getline(&input, &bufsize, stdin) == -1)
		exit(1);

	return (input);
}

/**
 * parse_input - tokenizes the input to separate the command from it's args
 * @input: the input string
 * @command: pointer to the char pointer where the cmd will be stored
 * @arguments: pointer to the char double pointer that stores the args
*/

void parse_input(char *input, char **command, char ***arguments)
{
	int args_counter = 0;
	char *token;
	char **temp = NULL;
	char **args = NULL;
	const char *delimiter = " \t\n";
	char *save_ptr;

	token = _strtok(input, delimiter, &save_ptr);
	if (token == NULL)
	{
		*command = NULL;
		*arguments = NULL;
		return;
	}

	*command = malloc(_strlen(token) + 1);
	if (*command == NULL)
		exit(1);
	_strcpy(*command, token);

	while (token != NULL)
	{
		args_counter++;
		temp = _realloc(args, (args_counter - 1) * sizeof(char *), args_counter * sizeof(char *));
		if (temp == NULL)
			exit(1);
		args = temp;

		args[args_counter - 1] = malloc(_strlen(token) + 1);
		if (args[args_counter - 1] == NULL)
			exit(1);
		_strcpy(args[args_counter - 1], token);

		token = _strtok(NULL, delimiter, &save_ptr);
	}

	temp = _realloc(args, args_counter * sizeof(char *), (args_counter + 1) * sizeof(char *));
	if (temp == NULL)
		exit(1);
	args = temp;
	args[args_counter] = NULL;

	_strcpy(input, save_ptr);

	*arguments = args;
}

