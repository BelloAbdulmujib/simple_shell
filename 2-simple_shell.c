#include <stdio.h>
#include <stdlib.h>

/**
 * main2 - Entry point
 * @argc: num of arguments passed
 * @argv: array of argument passed
 * Return: always 0 when succeful
 */

void get_command(int argc, char **argv);

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
	get_command(argc, argv);
	return (0);
}
/**
 * get_command - stores a command line argument in an array
 * @argc: number of command line arguments
 * @argv: array of pointers to the arguments
 *
 * Return: 0 when successful, 1 when failure
 */

void get_command(int argc, char **argv)

{
	char *command[100];
	int cNum = argc - 1;

	for (int i = 0; i < cNum; i++)
	{
		command[i] = argv[i + 1];
	}
	printf("The command entered is: %s\n", command[0]);
}
