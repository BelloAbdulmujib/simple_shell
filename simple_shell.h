#ifndef "SIMPLE_SHELL_H"
#define "SIMPLE_SHELL_H"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <main.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <winscard.h>
int main(void);
size_t getline(char **lineptr, size_t *n, FILE *stream);
int main3(int argc, int **argv);
void get_command(int argc, char **argv);
void execute_command(char *command);
int exit_builtin(char **args);
int env_builtin(char **args);
char **split_line(char *line);
int execute(char **args);

#endif
