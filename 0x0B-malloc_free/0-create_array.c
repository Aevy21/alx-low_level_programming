#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - Creates an array of char and
 * initializes it with a specific char.
 * @size: The size of the array.
 * @c: The char to initialize the array with.
 *
 * Return: On success, returns a pointer to the newly created array.
 * Otherwise, returns NULL.
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *array = (char *)malloc(size * sizeof(char));
if (size == 0)

return (NULL);

if (array == NULL)

return (NULL);

for (i = 0; i < size; i++)
array[i] = c;

return (array);
}
