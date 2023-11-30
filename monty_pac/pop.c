#include "monty.h"

/**
 * pop - Removes the top element of the stack.
 * @stack: Double pointer to the top of the stack.
 * @line_number: The line number in the file.
 *
 * Description: Pops the top element off the stack and frees the memory
 * associated with it.
 */

void pop(stack_t **stack, unsigned int line_number)
{
	if (!stack || !*stack)
		handle_error("L%d: can't pop an empty stack", __FILE__, line_number);

	stack_t *temp = *stack;
	*stack = (*stack)->next;

	if (*stack)
		(*stack)->prev = NULL;

	free(temp);
}
