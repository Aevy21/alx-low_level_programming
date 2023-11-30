#include "monty.h"
/**
 * pall - Prints all elements in the stack.
 * @stack: Pointer to the top of the stack.
 * @line_number: The line number in the file.
 *
 * Description: Prints all the elements in the stack from top to bottom.
 */

void pall(stack_t **stack, unsigned int line_number)
{
	(void)line_number; /* Unused parameter */

	print_stack(*stack);
}
/**
 * print_stack - Prints all elements in the stack.
 * @stack: Pointer to the top of the stack.
 */
void print_stack(stack_t *stack)
{
	while (stack)
	{
		printf("%d\n", stack->n);
		stack = stack->next;
	}
}
