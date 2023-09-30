#ifndef AEVY_H
#define AEVY_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <stdbool.h>

#define MAX_INPUT_LENGTH 1024
#define MAX_ARGUMENTS 15

void checkAndExit(char *command, int status);
int _exe_path(char **str);
void environment(char **env);
bool isInputEmpty(const char *input);
void displayPrompt(void);
int _putchar(char c);
int main(int argc, char **argv, char **env);

#endif
