#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * env_builtin - prints the current environment
 * @args: arguments passed to the function
 *
 * Return: 0 on success, 1 on failure
 */
int env_builtin(char **args)
{
	char **env = __environ;

	(void) args;
	while (*env)
	{
		printf("%s\n", *env);
		env++;
	}
	return (0);
}
/**
 * main6 - ...
 * @args: ....
 * execute - ..
 *
 * Return: ..
 */

int execute(char **args);
char **split_line(char *line);
int main6(void)
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
		if (args[0] == NULL)
		{
			free(line);
			free(args);
			continue;
		}
		if (strcmp(args[0], "exit") == 0)
		{
			free(line);
			free(args);
			break;
		}
		if (strcmp(args[0], "env") == 0)
		{
			env_builtin(args);
			free(line);
			free(args);
			continue;
		}
		status = execute(args);
		free(line);
		free(args);
		if (status == 0)
			break;
	}
	return (0);
}
