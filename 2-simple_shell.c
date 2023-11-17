#include <stdio.h>
#include <stdlib.h>

/**
 * main2 - entry point
 * @argc: number of command line arguments
 * @argv: array of pointers to the arguments
 *
 * Return: 0 when successful, 1 when failure
 */

int main2(int argc, char **argv)
{
	if (argc > 1)
	{
		printf("The first argument is: %s\n", argv[1]);
	}
	else
	{
		printf("No arguments were passed.\n");
	}
	return (0);
}
