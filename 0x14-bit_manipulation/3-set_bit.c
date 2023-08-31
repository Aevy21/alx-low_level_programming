#include "main.h"
#include <limits.h>


/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: A pointer to an unsigned long integer to modify.
 * @index: The index of the bit to set (0-based).
 * Return: 1 if the bit was successfully set, or -1
 * if an error occurred (index out of range).
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * CHAR_BIT)
	{
		*n |= (1UL << index);
		return (1);
	}
	else
	{
		return (-1);
	}
}

