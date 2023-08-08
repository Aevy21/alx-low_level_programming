#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *str_concat- Combines two strings into a new dynamically allocated buffer.
 * @s1: The first input string.
 * @s2: The second input string.
 *
 * Return: A dynamically allocated buffer containing the combined string,
 *or NULL if memory allocation fails.
 */

char *str_concat(char *s1, char *s2)
{
int s1_length = strlen(s1);
int s2_length = strlen(s2);
int size = s1_length + s2_length + 1;
int i = 0;
int j = 0;
char *s = malloc(size * sizeof(char));
if (s == NULL)
{
return (NULL);
for (; i < s1_length; i++)
{
if (s1_length == 0)
return (NULL);
s[i] = s1[i];
}
for (; j < s2_length; j++)
{
if (s2_length == 0)
s[s[i]+ 1] = s2[j];
}
}
s[size + 1] = '\0';
return (s);
}
