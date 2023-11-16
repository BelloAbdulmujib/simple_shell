#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - entry point
 *
 * Return: Always 0 when successful
 */

int main(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t nread;

	while (1)
	{
		printf("$ ");
		nread = getline(&line, &len, stdin);
		if (nread == -1)
		{
			break;
		}
		printf("Typing area: %s", line);
	}
	free(line);
	exit(EXIT_SUCCESS);
}
