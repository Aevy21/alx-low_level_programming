#include "main.h"
#include <stddef.h>

/**
* _strchr - Locate a character in a string.
* @s: The string to search in.
* @c: The character to locate.
*Return: A pointer to the first occurrence of the character c in the string s,
* or NULL if the character is not found.
*/
char *_strchr(char *s, char c)
{
int i;
for (i = 0 ; s[i] != '\0'; i++)
{
if (s[i] == c)
return (s + i);
}
if (s[i] == c)
return (s + i);
return (0);
}
