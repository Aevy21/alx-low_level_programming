#include "monty.h"
/**
 * process_file - Processes a Monty bytecode file.
 * @filename: The name of the file to process.
 *
 * Description: Reads the file, tokenizes instructions, and executes them.
 */

void process_file(const char *filename)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	unsigned int line_number;

		FILE *file = fopen(filename, "r");
	if (!file)
		handle_error("Error: Can't open file", filename, 0);

	line_number = 0;
	while ((read = getline(&line, &len, file)) != -1)
	{
		line_number++;

		/* Tokenize the line to get the opcode and arguments*/

		char *opcode = strtok(line, " \t\n");

		if (opcode && opcode[0] != '#') /* Ignore comments*/
		{
			execute_instruction(opcode, &stack, line_number);
		}
	}
	free(line);
	fclose(file);
}
