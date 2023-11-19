#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main1 - entry point
 *
 * Return: 0 when successful
 */
int main1(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	char *prompt = "$ ";

	while (1)

	{
		printf("%s", prompt);
		read = getline(&line, &len, stdin);
		if (read == -1)
			break;
		if (line[read - 1] == '\n')
			line[read - 1] = '\0';
		if (access(line, F_OK) == 0)
			execve(line, (char *[]) {line, NULL}, NULL);
		else
			printf("Command not found: %s\n", line);
	}
	free(line);
	return (0);
}
