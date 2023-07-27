#include "shell.h"

int main(void)
{
	char *input;
	char *command;
	char **arguments;
	int i;

	while (1)
	{
		input = read_input();
		if (input == NULL)
			break;

		parse_input(input, &command, &arguments);

		if (command != NULL)
		{
			printf("Command: %s\n", command);
		}

		if (arguments != NULL)
		{
			printf("Arguments:\n");

			for (i = 0; arguments[i] != NULL; i++)
			{
				printf("%d: %s\n", i + 1, arguments[i]);
			}
		}

		free(command);
		for (i = 0; arguments[i] != NULL; i++)
			free(arguments[i]);

		free(arguments);
		free(input);
	}

	return 0;
}

/**
#include "shell.h"

int main(void) {
    char *input;
    int num_prompts = 3;
    int i;

    for (i = 0; i < num_prompts; i++) {
        printf("#cisnotfun$ ");
        fflush(stdout);

        input = read_input();
        if (input != NULL) {
            printf("Input: %s\n", input);
            free(input);
        } else {
            printf("Error: Failed to read input.\n");
            break;
        }
    }

    return 0;
}

*/
