#include "main.h"

void error_exit(int code, const char *message);

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 * This function is the entry point of the program. It checks the number
 * of command-line arguments, opens the source and destination files,
 * copies data from source to destination, and handles errors.
 * Return: 0 on success, various exit codes on failure.
 */
int main(int argc, char *argv[])
{
	const char *file_from, *file_to;
	int fd_from, fd_to;
	char buffer[BUF_SIZE];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		error_exit(97, "Usage: cp file_from file_to");
	}

	file_from = argv[1];
	file_to = argv[2];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", file_from);
		error_exit(98, "");
	}


	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0666);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		error_exit(99, "");
	}

	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			error_exit(99, "");
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", file_from);
		error_exit(98, "");
	}

	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		error_exit(100, "");				}
	return (0);
}


/**
 * error_exit - Print an error message and exit with a specific code.
 * @code: The exit code to be used.
 * @message: The error message to be printed.
 * This function prints an error message to the standard error (stderr)
 * and exits the program with the specified exit code.
 */
void error_exit(int code, const char *message)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
	exit(code);
}

