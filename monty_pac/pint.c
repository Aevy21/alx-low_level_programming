#include "monty.h"

/**
 * pint - Prints the value at the top of the stack.
 * @stack: Double pointer to the top of the stack.
 * @line_number: The line number in the file.
 */

void pint(stack_t **stack, unsigned int line_number)
{
	if (!stack || !*stack)
		handle_error("L%d: can't pint, stack empty", __FILE__, line_number);

	printf("%d\n", (*stack)->n);
}
