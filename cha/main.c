#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>

#define MAX_INPUT_LENGTH 1024

// Function to display the shell prompt
void display_prompt() {
    if (write(STDOUT_FILENO, "MyShell> ", 9) == -1) {
        perror("Write error");
        exit(EXIT_FAILURE);
    }
}

// Function to parse a command into arguments
void parse_command(char* command, char** args) {
    char* token = strtok(command, " \t\n");

    int arg_count = 0;
    while (token != NULL) {
        args[arg_count++] = token;
        token = strtok(NULL, " \t\n");
    }
    args[arg_count] = NULL;
}

// Function to execute a command with pipes
void execute_pipe_command(char** args, char** args_pipe) {
    int pipefd[2];
    if (pipe(pipefd) == -1) {
        perror("Pipe error");
        exit(EXIT_FAILURE);
    }

    pid_t child_pid = fork();

    if (child_pid < 0) {
        perror("Fork failed");
        exit(EXIT_FAILURE);
    } else if (child_pid == 0) { // Child process
        close(pipefd[0]); // Close read end of the pipe
        dup2(pipefd[1], STDOUT_FILENO);
        close(pipefd[1]);
        execvp(args[0], args);
        perror("Execution error");
        exit(EXIT_FAILURE);
    } else { // Parent process
        close(pipefd[1]); // Close write end of the pipe
        dup2(pipefd[0], STDIN_FILENO);
        close(pipefd[0]);
        // Wait for the child process to finish
        wait(NULL);
        // Now, execute the second command
        execvp(args_pipe[0], args_pipe);
        perror("Execution error");
        exit(EXIT_FAILURE);
    }
}

// Function to execute a single command using execve
void execute_single_command(char** args) {
    if (strcmp(args[0], "ls") == 0) {
        char* ls_args[] = {"ls", NULL};
        if (execve("/bin/ls", ls_args, NULL) == -1) {
           perror("Execution error for 'ls'");
			   exit(EXIT_FAILURE);
        }
    } else {
        if (execve(args[0], args, NULL) == -1) {
            perror("Execution error");
            exit(EXIT_FAILURE);
        }
    }
}

// Function to execute a command based on its type
void execute_command(char* command) {
    char* args[100];
    char* args_pipe[100];
    int pipe_count = 0;

    parse_command(command, args);

    for (int i = 0; args[i] != NULL; i++) {
        if (strcmp(args[i], "|") == 0) {
            args[i] = NULL; // Terminate the command before the pipe
            int j = i + 1;
            while (args[j] != NULL) {
                args_pipe[j - i - 1] = args[j];
                args[j] = NULL;
                j++;
            }
            break;
        }
    }

    if (args_pipe[0] == NULL) {
        execute_single_command(args);
    } else {
        execute_pipe_command(args, args_pipe);
    }
}

int main() {
    char input[MAX_INPUT_LENGTH];

    while (1) {
        // Display the shell prompt
        display_prompt();

        // Read user input using read
        ssize_t bytes_read = read(STDIN_FILENO, input, sizeof(input));

        if (bytes_read == -1) {
            perror("Read error");
            exit(EXIT_FAILURE);
        } else if (bytes_read == 0) {
            break; // End of input
        }

        // Null-terminate the input
        input[bytes_read] = '\0';

        // Execute the command
        execute_command(input);
    }

    if (errno != 0) {
        perror("Unexpected error");
    }

    return 0;
}

