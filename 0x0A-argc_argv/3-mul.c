#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 *main-function that multiples two numbers
 *@_atoi - converts a string to an integer
 * @argv: string to be converted
 *@argc:comm`nd line calculator
 * Return: the int converted from the string
 */
int main(int argc, char *argv[])
{
int a = 0;
int b = 0;
int result = 0;
if (argc == 3)
{
a = atoi(argv[1]);
b = atoi(argv[2]);
result = a *b;
printf("%d\n", result);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
