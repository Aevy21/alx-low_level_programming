#include "main.h"

/**
 * create_file - Creates or truncates a file and writes text content to it.
 * @filename: The name of the file to create or truncate.
 * @text_content: The text content to write to the file (can be NULL).
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int file_info;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	file_info = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file_info == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(file_info, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(file_info);
			return (-1);
		}
	}
	close(file_info);
	return (1);
}

