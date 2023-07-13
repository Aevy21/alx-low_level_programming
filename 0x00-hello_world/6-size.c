#include <stdio.h>
/**
* main - program
* Return: always 0
*/

int main(void)
{
printf("Size of a char: %d byte(s)", sizeof(char));
printf("\nSize of an int: %d byte(s)", sizeof(int));
printf("\nSize of a long int: %d byte(s)", sizeof(long int));
printf("\nSize of a long long int: %d byte(s)", sizeof(long long int));
printf("\nSize of a float: %d byte(s)\n", sizeof(float));

return (0);
}
