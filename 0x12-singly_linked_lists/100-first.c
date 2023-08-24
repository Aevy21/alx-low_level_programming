#include "lists.h"

/**
 * print_sent - prints a sentence before the main
 * function is executed
 */
void print_sent(void)__attribute__((constructor));
void print_sent(void)
{
	printf("You're beat! and yet, you must allow,\n");
		printf("I bore my house upon my back!\n");
}
