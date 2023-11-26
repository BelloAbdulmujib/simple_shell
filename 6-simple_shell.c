#include <unistd.h>
#include <stdlib.h>


#define BUFFER_SIZE 1024

/**
 * my_getline - ....
 *
 * Return: return to the line
 */

char *my_getline(void)
{
	static char buffer[BUFFER_SIZE];
	static char *buffer_ptr = buffer;
	static int buffer_size;

	char *line = NULL;
	int line_size = 0;

	while (1)
	{
		if (buffer_size == 0)
		{
			buffer_size = read(STDIN_FILENO, buffer, BUFFER_SIZE);
			buffer_ptr = buffer;
		}

		if (buffer_size == 0)
		{
			break;
		}

		char c = *buffer_ptr++;

		buffer_size--;

		if (c == '\n')
		{
			break;
		}

		line = realloc(line, line_size + 1);
		line[line_size++] = c;
	}

	if (line_size > 0)
	{
		line = realloc(line, line_size + 1);
		line[line_size] = '\0';
	}

	return (line);
}
