#include "monty.h"
/**
 * swap - Swaps the top two elements of the stack.
 * @stack: Double pointer to the top of the stack.
 * @line_number: The line number in the file.
 */
void swap(stack_t **stack, unsigned int line_number)
{
	if (!stack || !*stack || !(*stack)->next)
		handle_error("L%d: can't swap, stack too short", __FILE__, line_number);

	int temp = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = temp;
}
