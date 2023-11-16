#include "monty.h"
/**
 * handle_arguments - Handles the command-line arguments.
 * @argc: The argument count.
 * @argv: Array of pointers to the arguments.
 *
 * Description: Validates the number of arguments and the file existence.
 */

void handle_arguments(int argc, char *argv[])
{
	if (argc != 2)
		handle_error("USAGE: monty file", __FILE__, __LINE__);

	const char *filename = argv[1];

	FILE *file = fopen(filename, "r");
	if (!file)
		handle_error("Error: Can't open file", filename, __LINE__);

	fclose(file);
}
