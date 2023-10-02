#include "main.h"

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
char *allocate_custom_buffer(char *custom_file);
void close_custom_file(int custom_fd);

/**
 * main - Entry point for the custom file copying program.
 * @argc: The number of command-line arguments.
 * @argv: An array of pointers to the command-line arguments.
 *
 * Return: 0 on success, or an error code on failure.
 */
int main(int argc, char *argv[])
{
	int custom_from, custom_to, custom_r, custom_w;
	char *custom_buffer;

	if (argc != 3)
	{
		/* Print usage message and exit with code 97 for incorrect argument count. */
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	custom_buffer = allocate_custom_buffer(argv[2]);
	custom_from = open(argv[1], O_RDONLY);
	custom_r = read(custom_from, custom_buffer, 1024);
	custom_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (custom_from == -1 || custom_r == -1)
		{
			/* Print error message and exit with code 98 for read error. */
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(custom_buffer);
			exit(98);
		}

		custom_w = write(custom_to, custom_buffer, custom_r);
		if (custom_to == -1 || custom_w == -1)
		{
			/* Print error message and exit with code 99 for write error. */
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(custom_buffer);
			exit(99);
		}

		custom_r = read(custom_from, custom_buffer, 1024);
		custom_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (custom_r > 0);

	free(custom_buffer);
	close_custom_file(custom_from);
	close_custom_file(custom_to);

	return (0);
}

/**
 * allocate_custom_buffer - Allocates a custom buffer for file copying.
 * @custom_file: The name of the destination file.
 *
 * Return: A pointer to the newly-allocated custom buffer.
 */
char *allocate_custom_buffer(char *custom_file)
{
	char *custom_buffer;

	custom_buffer = malloc(sizeof(char) * 1024);

	if (custom_buffer == NULL)
	{
		/* Print error message and*/
		/*exit with code 99 for memory allocation failure. */
		dprintf(STDERR_FILENO,
				"Error: Can't allocate memory for %s\n", custom_file);
		exit(99);
	}

	return (custom_buffer);
}

/**
 * close_custom_file - Closes a custom file descriptor.
 * @custom_fd: The custom file descriptor to be closed.
 */
void close_custom_file(int custom_fd)
{
	int custom_close;

	custom_close = close(custom_fd);

	if (custom_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", custom_fd);
		exit(100);
	}
}

