#include "main.h"
/**
* _strncpy - Copies a string up to n characters.
* @dest: The destination buffer.
* @src: The source string.
* @n: The maximum number of characters to copy.
* Return: A pointer to the destination buffer.
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; src[i] != '\0' && i < n; i++)
dest[i]	= src[i];
while (i < n)
dest[i++] = '\0';
return (dest);
}
