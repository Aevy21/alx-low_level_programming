#include "main.h"


/**
* _strstr - Find the first occurrence of a substring in a string.
*
* @haystack: The string to search within.
* @needle: The substring to find.
* The _strstr() function locates the first occurrence of the substring needle
* in the string haystack. The terminating null bytes (\0) are not compared.
*Return:A pointer to the beginning of the located substring, or NULL if the
* substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
int i, j;
if (*needle == '\0')
{
return (haystack);
}

for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
{
break;
}
}

if (needle[j] == '\0')
{
return (haystack + i);
}
}
return (haystack);
}
