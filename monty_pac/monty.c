#include "monty.h"
/**
 * main - Entry point for the Monty bytecode interpreter.
 * @argc: The argument count.
 * @argv: Array of pointers to the arguments.
 *
 * Description: Validates command-line arguments, processes the Monty file,
 * and executes the Monty bytecode instructions.
 *
 * Return: Always 0 on success.
 */
int main(int argc, char *argv[])
{
	handle_arguments(argc, argv);
	process_file(argv[1]);

	/* Free the allocated memory for the stack before exiting */
	while (stack)
	{
		stack_t *temp = stack;
		stack = stack->next;
		free(temp);
	}

	return (0);
}
