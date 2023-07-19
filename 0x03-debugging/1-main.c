#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
int i;

printf("Infinite loop incoming :(\n");

i = 0;
/*while loop starts here */
while (i < 10)
{
putchar(i);
}
/* while loop ends here */
printf("Infinite loop avoided! \\o/\n");

return (0);
}
