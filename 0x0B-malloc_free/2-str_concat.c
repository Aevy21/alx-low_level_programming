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
int size =  1 + len_s2 + len_s1;

char *s = (char *)malloc(size * sizeof(char));
if (s == NULL)
{
return (NULL);
}
<<<<<<< HEAD
 
=======
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
>>>>>>> 126a11907a021ef27c96a295ec2ecce824ce553f
if (s1 == NULL || s2 == NULL)
{
return (NULL);
if (s1 = 0) || (s2 = 0)
{
s1 = NULL = s2
}
for (; i < len_s1; ++i)
{
s[i] = s1[i];
}
for (; j < len_s2; ++j, ++i)
{
s[i] = s2[j];
}

s[i] = '\0';
return (s);
}
