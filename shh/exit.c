#include "main.h"

/**
 * checkAndExit - Check if the command is "exit" and exit the program accordingly.
 * @command: The command to check.
 * @status: The exit status code.
 *
 * If the command is "exit," this function will check the status code.
 * If status is -1, it displays an error message and exits with status 1.
 * If status is any other integer, it exits with that status.
 */
void checkAndExit(char *command, int status)
{
	if (strcmp(command, "exit") == 0)
	{
		if (status == -1)
		{
			perror("Error");
			exit(1);
		}
		else
		{
			exit(status);
		}
	}
}
