#include "main.h"

/**
* _strspn - Gets the length of a prefix substring
* @s: The input string to check
* @accept: The string of characters to find in the prefix substring
* Return: The number of bytes in the initial segment of s
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0' && s[i] != accept[j]; j++)
{
}
if (accept[j] == '\0')
return (i);
}
return (i);
}
