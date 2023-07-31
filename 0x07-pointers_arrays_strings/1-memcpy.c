#include "main.h"

/**
*_memcpy-function that copies memory area
*@src: pointer to source of data to be copied
*@dest: ponter to the destination array where content isto be copied
*@n: number of bytes to be copied
*Return: pointer to destination (dest).
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest = src;
}
return (dest);
}
