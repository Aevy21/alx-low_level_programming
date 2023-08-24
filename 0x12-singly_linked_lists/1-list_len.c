#include "lists.h"
/**
 * list_len - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t list_len(const list_t *h)
{
	size_t element_count = 0;

	while (h)
	{
		element_count++;
		h = h->next;
	}
	return (element_count);
}



