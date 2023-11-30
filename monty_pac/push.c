#include "monty.h"
/**
 * push - Pushes an element onto the stack.
 * @stack: Double pointer to the top of the stack.
 * @line_number: The line number in the file.
 *
 * Description: Checks for a valid integer argument, converts it, and pushes
 * the resulting value onto the stack.
 */

void push(stack_t **stack, unsigned int line_number)
{
	char *arg = stack[1];
	int value = atoi(arg);	
	/* Check if there is an argument after push */
	if (!stack || !stack[1])
		handle_error("L%d: usage: push integer", __FILE__, line_number);

	/* Validate the input before conversion */

	for (int i = 0; arg[i] != '\0'; i++)
	{
		if (!isdigit(arg[i]) && arg[i] != '-' && arg[i] != '+')
		{
			handle_error("L%d: usage: push integer", __FILE__, line_number);
		}
	}
	/* Check if conversion is successful */
	if (value == 0 && arg[0] != '0')
		handle_error("L%d: usage: push integer", __FILE__, line_number);

	/* Create a new node */
	stack_t *new_node = malloc(sizeof(stack_t));
	if (!new_node)
		handle_error("Error: malloc failed", __FILE__, line_number);
	new_node->n = value;
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack)
		(*stack)->prev = new_node;

	*stack = new_node;
}

