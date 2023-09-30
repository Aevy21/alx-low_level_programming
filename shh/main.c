#include "main.h"


/**
 * main - The entry point of the shell program.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 * @env: An array of strings representing the environment variables.
 *
 * This function serves as the entry point for the shell program. It processes
 * user commands, executes them, and provides a command-line interface for the user.
 * It also handles built-in commands such as "exit" and "env."
 *
 * Return: Upon successful execution, it returns 0. If any error occurs during
 * the execution, it returns a non-zero exit code.
 */

int main(int argc, char **argv, char **env)
{
	char *userInput = NULL;
	size_t inputSize = 0;
	char *args[15];
	char executablePath[MAX_INPUT_LENGTH];
	int i, pid, status;

	if (argc == 3)
	{
		checkAndExit(argv[1], atoi(argv[2]));
		/* The code here will exit the program based on the command-line arguments */
	}

	while (1)
	{
		displayPrompt();

		/* Read user input using getline */
		if (getline(&userInput, &inputSize, stdin) == -1)
		{
			perror("getline reading user input failed");
			free(userInput);
			exit(1);
		}

		/* Remove newline character from user input */
		userInput[strcspn(userInput, "\n")] = '\0';

		/* Check if user input is empty or contains only spaces */
		if (isInputEmpty(userInput))
		{
			continue; /* Empty input, prompt again */
		}

		/* Tokenize user input */
		args[0] = strtok(userInput, " ");
		if (args[0] == NULL)
		{
			continue; /* Empty input, prompt again */
		}

		i = 0;
		while (args[i] != NULL)
		{
			i++;
			args[i] = strtok(NULL, " ");
		}

		if (strcmp(args[0], "exit") == 0)
		{
			free(userInput);
			exit(0);
		
		else if (strcmp(args[0], "env") == 0); 
		
		else if (_exe_path(&args[0] == 1))
		
		{
			pid = fork();
			
		}
		if (pid == 0)
			{
				/* Child process */
				execve(executablePath, args, env);
				perror("execve"); /* Execve should not return, print error if it does */
				free(userInput);
				exit(1);
			}
			else if (pid > 0)
			{
				/* Parent process */
				wait(&status);
			}
	
			else
			{
				perror("fork error in creating processes");
				free(userInput);
				exit(1);
			}
	
	free(userInput);
	return 0;
		}
	}
}



