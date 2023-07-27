#include "main.h"

/**
* print_number - print numbers
* @n: integer to be printed.
* Return: 0 Always (success).
*/

void print_number(int n)
{
unsigned int n1;

n1 = n;

if (n < 0)
{
_putchar('-');
n1 = -n;
}
if (n1 / 10 != 0)
{
print_number(n1 / 10);
}
_putchar((n1 % 10) + '0');
}
