#include <stdio.h>

/**
*main- function prints the name of the program
*@argv: Array of command-line arguments
*@argc: Command line counter
*Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
if (argc > 0)
{
printf("%s\n", argv[0]);
}
else
{
printf("No program name provided.\n");
}
return (0);
}
