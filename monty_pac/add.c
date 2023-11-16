#include "monty.h"
/**
 * add - Adds the top two elements of the stack.
 * @stack: Double pointer to the top of the stack.
 * @line_number: The line number in the file.
 */

void add(stack_t **stack, unsigned int line_number)
{
	if (!stack || !*stack || !(*stack)->next)
		handle_error("L%d: can't add, stack too short", __FILE__, line_number);

	(*stack)->next->n += (*stack)->n;

	/* Pop the top element */
	pop(stack, line_number);
}
