#include <stdlib.h>
#include <stdio.h>

/**
 * exit_builtin - exits the shell
 * @args: arguments passed to the function
 *
 * Return: 0 when successfuk, 1 on failure
 */

int exit_builtin(char **args)
{
	(void) args;
	return (0);
}
/**
 * main5 - Entry point
 * @line: ....
 *
 * Return: 0 when success and 1 on failure
 */

char **split_line(char *line);
int execute(char **args);
int main5(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	char **args;
	int status;

	while (1)

	{
		printf("$ ");
		read = getline(&line, &len, stdin);
		if (read == -1)
			break;
		args = split_line(line);
		status = execute(args);
		free(line);
		free(args);
		if (status == 0)
			break;
	}
	return (0);
}
/**
 * split_line - ...
 * @line: ....
 *
 * Return: ...
 */

char **split_line(char *line)
{
	(void) line;
	return (NULL);
}
/**
 * execute - ...
 * @args: ...
 *
 * Return: ...
 */
int execute(char **args)
{
	(void) args;
	return (0);
}
