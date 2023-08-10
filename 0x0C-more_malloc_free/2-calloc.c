#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: create array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof*str * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}

/**
 * _calloc - create array of size size and assign char c
 * @size: size of array
 * @nmeb:array element
 * Return: returns NULL if If malloc fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
 
{
	char *array;
	unsigned int i;

     if(nmemb == 0 || size == 0)
     return (NULL);
     array = calloc(sizeof*array, size);
    if (size == 0 || array == NULL)
    return (NULL);
    for (i = 0; i < size; i++)
    array[i] = nmemb;
     return (array);
}

	
	
