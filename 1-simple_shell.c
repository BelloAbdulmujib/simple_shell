#include <stdio.h>
#include <stdlib.h>

/**
 * getline - function to rean an entire line from the input stream
 * @lineptr: pointer to the buffer
 * @n: size of buffer
 * @stream: pointer to the input stream
 * Return: characters number read
 */

ssize_t getline(char **lineptr, size_t *n, FILE *stream)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t nread;
	(void)lineptr;
	(void)n;
	(void)stream;

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
