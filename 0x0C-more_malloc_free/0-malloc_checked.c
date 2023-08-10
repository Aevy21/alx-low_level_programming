#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked-function that allocates memory using malloc.
 *@b:size of the memory to be allocated
 *
 *Returns: a pointer to the allocated memory otherwise
*Return:If malloc fails, exit with status value 98
 */
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
