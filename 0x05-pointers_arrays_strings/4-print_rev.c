#include "main.h"

/**
* print_rev - imprime en reversa
* @s: string
* return: 0
*/
void print_rev(char *s)

{

int length = 0;
int O;
while (*s != '\0')
{
length++;
s++;
}
s--;
 for (O = length; O > 0; O--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
