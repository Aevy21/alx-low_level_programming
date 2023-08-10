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
int j = 0;
int i = 0;
int len_s1 = strlen(s1);
int len_s2 = strlen(s2);
int size = len_s2 + len_s1 + 1;
char *S = (char *)malloc(size * sizeof(char));

if (S == NULL)
{
return (NULL);
}
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
if (s1 == NULL || s2 == NULL)
{
return (NULL);
}
for (i = 0; i < len_s1; i++)
{
S[i] = s1[i];
}
for (j = 0; j < len_s2; j++, i++)
{
S[i] = s2[j];
}

S[i] = '\0';
return (S);
}
