#include "main.h"
int _exe_path(char **str);
/**
 * _exe_path - check if the command exist in the
 * path, if it does not creat a path and append it to the directory
 * @str: pointer to the command.
 *
 * Return: return a status value of 1 on success and 0 on failure.
 */
int _exe_path(char **str)
{
	char *_path, *_split, *buffer;
	static char path_buf[1024], array[1000];
	unsigned int i = 0;

	if (access(*str, X_OK) == 0)
		return (1);
	_path = getenv("PATH");
	if (_path == NULL)
		return (0);
	strcpy(path_buf, _path);
	_split = strtok(path_buf, ":");
	while (_split != NULL)
	{
		buffer = malloc(strlen(_split) + strlen("/") + strlen(*str) + 1);
		if (buffer == NULL)
		{
			perror(*str);
			free(buffer);
			return (0);
		}
		strcpy(buffer, _split);
		strcat(buffer, "/");
		strcat(buffer, *str);
		if (access(buffer, X_OK) == 0)
		{
			while (i < strlen(buffer))
			{
				array[i] = buffer[i];
				i++;
			}
			array[i] = '\0';
			free(buffer);
			*str = array;
			return (1);
		}
		free(buffer);
		_split = strtok(NULL, ":");
	}
	perror(*str);
	return (0);
}
