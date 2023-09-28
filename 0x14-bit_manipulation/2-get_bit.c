#include "main.h"
#include <limits.h>

/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The unsigned long integer to extract the bit from.
 * @index: The index of the bit to get (0-based).
 * Return: The value of the bit at the specified index (0 or 1),
 * or -1 if an error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * CHAR_BIT)
	{
		return ((n >> index) & 1);
	}
	else
	{
		return (-1);
	}

}

