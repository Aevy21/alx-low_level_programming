#include "lists.h"

/**
 * print_sent - prints a sentence before the main
 * function is executed
 */
void print_sent()__attribute__((constructor));
void print_sent()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
