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
int i = 0, j;

while (dest[i] != '\0')
i++;
for (j = 0; j < n && src[j] != '\0'; j++, i++)
dest[i] = src[j];
dest[i] = '\0';
return (dest);
}
