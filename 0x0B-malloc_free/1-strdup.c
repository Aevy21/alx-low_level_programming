#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *_strdup-function that returns a pointer to a newly allocated space in memory,
 *which contains a copy of the string given as a parameter.
 *@str:string to be duplicated.
 * Return:NULL if str = NULL
 *On success, the _strdup function returns a pointer to the duplicated string.
 *returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
char *s;
if (str == NULL)
return (NULL);

s = (char *)malloc(strlen(str) + 1);
if (s == 0)
return (NULL);  
strcpy(s, str);
return (s);
if (s == NULL)
return (NULL);
free(s);
}
