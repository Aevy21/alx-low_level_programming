#include "main.h"

/**
 * append_text_to_file - Appends text_content to the end of a file.
 * @filename: Name of the file to which text should be appended.
 * @text_content: The text to append to the file.
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_disc;
	size_t text_length;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (1);
	}

	file_disc = open(filename, O_WRONLY | O_APPEND);
	if (file_disc == -1)
	{
		return (-1);
	}

	text_length = strlen(text_content);
	bytes_written = write(file_disc, text_content, text_length);

	if (bytes_written == -1)
	{
		close(file_disc);
		return (-1);
	}

	close(file_disc);
	return (1);
}

