#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * handle_error - Handles and reports runtime errors.
 * @message: The error message to display.
 * @file: The file where the error occurred.
 * @line: The line number in the file where the error occurred.
 *
 * Description: Prints the error message along with information about the
 * file and line number, then exits the program with EXIT_FAILURE.
 */
void handle_error(const char *message, const char *file, unsigned int line)
{
	fprintf(stderr, "%s: %s %d:%u\n", message, file,  line);
	exit(EXIT_FAILURE);
}
