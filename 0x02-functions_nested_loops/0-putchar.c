#include <unistd.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char *p = "_putchar\n";

while (*p)
{
write(1, p, 1);
p++;
}
return (0);
}
