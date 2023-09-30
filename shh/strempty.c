#include "main.h"
#include <stdbool.h>

/**
 * isInputEmpty - Check if a string is empty or consists only of spaces.
 * @input: The input string to check.
 * Return: true if the string is empty or contains only spaces, false otherwise.
 */

bool isInputEmpty(const char *input)
{
	while (*input)
	{
		if (*input != ' ')
		{
			return (false); /* Non-space character found, not empty */
		}
		input++;
	}
	return (true); /* All characters are spaces, the string is empty */
}

