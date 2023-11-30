#include "monty.h"

/**
 * nop - Does nothing.
 * @stack: Double pointer to the top of the stack.
 * @line_number: The line number in the file.
 */

void nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;       /* Unused parameter */
	(void)line_number; /* Unused parameter */
	/* This opcode doesn't do anything */
}
