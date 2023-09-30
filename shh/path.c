#include "main.h"

/**
 * findExecutablePath - Find the executable path of a command.
 * @command: The command to find the executable path for.
 * @path: The buffer to store the executable path if found.
 *
 * This function attempts to find the executable path of a given command.
 *
 * Return: 1 if the executable was found, 0 otherwise.
 */
int findExecutablePath(char *command, char *path)
{
	char cwd[MAX_INPUT_LENGTH];      /* Buffer for the current working directory */
	char buffer[MAX_INPUT_LENGTH];   /* Buffer for the constructed path */

	/* Check if the command is already executable in the current directory */
	if (access(command, X_OK) == 0)
		return (1);

	/* Get the current working directory */
	if (getcwd(cwd, sizeof(cwd)) == NULL)
	{
		perror("getcwd");  /* Print an error message if getcwd fails */
		return (0);
	}

	/* Construct the full path by combining the current directory and the command */
	if (strlen(cwd) + strlen("/") + strlen(command) < MAX_INPUT_LENGTH)
	{
		strcpy(buffer, cwd);          /* Copy the current directory to the buffer */
		strcat(buffer, "/");          /* Append a slash */
		strcat(buffer, command);      /* Append the command name */

		/* Check if the constructed path is executable */
		if (access(buffer, X_OK) == 0)
		{
			strncpy(path, buffer, MAX_INPUT_LENGTH);  /* Copy the path to the 'path' parameter */
			return (1);  /* Executable was found */
		}
	}

	perror(command);  /* Print an error message if access fails for the original command */
	return (0);  /* Executable not found */
}

