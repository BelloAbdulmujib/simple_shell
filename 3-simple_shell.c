#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

/**
 * execute_command - executes a command
 * @command: command to execute
 *
 * Return: void
 */
void execute_command(char *command)
{
	char *args[] = {command, NULL};

	if (access(args[0], X_OK) == -1)

	{
		printf("%s: command not found\n", args[0]);
		exit(EXIT_FAILURE);
	}

	execvp(args[0], args);
	perror("execvp");
	exit(EXIT_FAILURE);
}
/**
 * main3 - Entry point
 *
 * Return: Always 0 on failure
 */

int main3(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t read;

	while (1)
	{
		printf("$ ");
		read = getline(&line, &len, stdin);
		if (read == -1)
		{
			break;
		}
		line[read - 1] = '\0';

		pid_t pid = fork();

		if (pid == -1)
		{
			perror("fork");
			exit(EXIT_FAILURE);
		}
		else if (pid == 0)
		{
			execute_command(line);
		}
		else
		{
			wait(NULL);
		}
	}

	free(line);
	return (0);
}
