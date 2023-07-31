#include "main.h"

/**
* _strpbrk - Searches a string for any of a set of bytes.
* @s: The string to be searched.
* @accept: The set of bytes to search for
* Returns: a pointer to the byte in 's' otherwise NULL is returned.
*/


char *_strpbrk(char *s, char *accept)

{
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0' && s[i] != accept[j]; j++)
{j++;
}
if (accept[j] != '\0')
{
return (&(s[i]);
}
}
return (s);
}
