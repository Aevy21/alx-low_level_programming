
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
    int size =  1 + s2_length + s1_length;
    
    char *s = malloc(size * sizeof(char));
    if (s == NULL)
    {
        return (NULL);
    }
    
    if (s1 != NULL)
    {
      while (s1 != '\0')
    {
        s++ = s1++;
	}
    }
    if (s2 != NULL)
    {
        while (s2 != '\0')
    {
        s++ = s2++;
    }
    }
    s = '\0';
    return (s);
}
