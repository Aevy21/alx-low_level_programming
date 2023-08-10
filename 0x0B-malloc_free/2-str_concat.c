#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *str_concat- Combines two strings into a  *new dynamically allocated buffer.
 * @s1: The first input string.
 * @s2: The second input string.
 * Return: A dynamically allocated buffer
 *containing the combined string,
 *or NULL if memory allocation fails.
 */

char *str_concat(char *s1, char *s2)

{
char *strnew = NULL;
int n2;
unsigned int i;
int n1;
int count;
count = 0;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (n1 = 0; s1[n1] != '\0'; n1++)
for (n2 = 0; s2[n2] != '\0'; n2++)
strnew = (char *)malloc((n1 + n2 + 1) * sizeof(char));
if (strnew == NULL)
{
return (NULL);
}

for (i = 0; s1[i] != '\0'; i++)
strnew[i] = s1[i];
for (; s2[count] != '\0'; i++)
{
strnew[i] = s2[count];
count++;
}

return (strnew);
}
