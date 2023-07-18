#include <stdio.h>
#include <unistd.h>
/**
* main - Entry point
*
* Return: Alway 0 (Sucess)
*/

int main(void)
{
char *p = "_putchar\n";

while (*p)
{
putchar(*p);
p++;
}
return (0);
}
