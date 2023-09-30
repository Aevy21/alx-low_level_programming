#include "main.h"

/**
 * _putchar - Custom _putchar function using write
 * @c: The character to be written to standard output
 * Return: On success, return the number of bytes written, otherwise -1.
 */
int _putchar(char c)
{
	return write(1, &c, 1);

}

/**
 * displayPrompt - Display the shell prompt if stdin is a terminal
 */
void displayPrompt(void)
{
	if (isatty(0) == 1)
		_putchar('$');
	_putchar(' ');
}
