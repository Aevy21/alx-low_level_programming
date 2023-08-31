#include "main.h"

/**
 * print_binary - Prints the binary representation of an unsigned long int
 * @n: The number to be converted and printed
 */

void print_binary(unsigned long int n) 
{
	if (n > 1)
	{
		print_binary(n >> 1); 
	}
	printf("%lu", n & 1); 
}

