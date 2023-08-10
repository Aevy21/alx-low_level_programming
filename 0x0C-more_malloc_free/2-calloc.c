#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * _calloc - create array of size size and assign char c
 * @size: size of array
 * @nmemb:array element
 * Return: returns NULL if If malloc fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)

{
char *array;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);
array = calloc(sizeof(*array), size);
if (size == 0 || array == NULL)
return (NULL);
for (i = 0; i < size; i++)
array[i] = nmemb;
return (array);
}
