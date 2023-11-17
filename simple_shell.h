#ifndef "SIMPLE_SHELL_H"
#define "SIMPLE_SHELL_H"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <main.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void);
size_t getline(char **lineptr, size_t *n, FILE *stream);
void main(int argc, int **argv);
#endif
