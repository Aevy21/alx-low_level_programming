#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
int i;

printf("Infinite loop incoming :(\n");
/* while loop starts here */
i = 0;

while (i < 10)
{
putchar(i);
}
/* while loop ends here */
printf("Infinite loop avoided! \\o/\n");

return (0);
}
