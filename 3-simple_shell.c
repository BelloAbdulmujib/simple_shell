#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

/**
 * main3 - entry point
 *
 * Return: Always 0 when successful
 */

int main3(void)
{
	 char *buffer = NULL;
	 size_t bufsize = 0;
	 ssize_t characters = 0;
	 char **args = NULL;
	 int status = 0;
	 pid_t pid = -1;

	 while(1)
	 {
		 printf("$ ");
		 characters = getline(&buffer, &bufsize, stdin);
		 if (characters == -1)
		 {
			 free(buffer);
			 exit(EXIT_SUCCESS);
		 };
		 args = malloc(sizeof(char *) * 2);
		         if (args == NULL)
			 {
				 perror("Error: ");
				 exit(EXIT_FAILURE);
			 }
			 if (pid == 0)
			 {
				 if (execve(args[0], args, NULL) == -1)
				 {
					 perror("Error: ");
					 exit(EXIT_FAILURE);
				 }
			 }
			 else
			 {
				 wait(&status);
			 }
			 free(args);

	 }
	 return (0);
}
