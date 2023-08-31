#include "main.h"
#include <limits.h>

/**
 * clear_bit - Clears (sets to 0) the value of a bit at a given index.
 * @n: A pointer to an unsigned long integer to modify.
 * @index: The index of the bit to clear (0-based).
 * Return: 1 if the bit was successfully cleared,
 *or -1 if an error occurred (index out of range).
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * CHAR_BIT)
	{
		*n &= ~(1UL << index);
		return (1);
	}
	else
	{
		return (-1);
	}
}

