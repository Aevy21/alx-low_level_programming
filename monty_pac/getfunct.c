#include "monty.h"

/**
 * execute_instruction - Executes a Monty instruction.
 * @opcode: The opcode to execute.
 * @stack: Double pointer to the top of the stack.
 * @line_number: The line number in the file.
 *
 * Description: Matches the opcode with a function and executes it.
 */

void execute_instruction(const char *opcode, stack_t **stack, unsigned int line_number)
{
	/* Find the function corresponding to the opcode */
	int i;
	 instruction_t instruction_s[] = {
        {"push", push},
        {"pall", pall},
        {"pint", pint},
        {"pop", pop},
        {"swap", swap},
        {"add", add},
        {"nop", nop},
        {NULL, NULL} // End of the array marker
    };

	for (i = 0; instruction_s[i].opcode; i++)
	{
		if (strcmp(opcode, instruction_s[i].opcode) == 0)
		{
			instruction_s[i].f(stack, line_number);
			return;
		}
	}

	/* If the opcode is not found */
	handle_error("L%d: unknown instruction %s", __FILE__, line_number);
}
