#include "lists.h"

/**
 *  listint_len - returns the number of elements in a linked list
 * @h: pointer to the listint_t
 * Return: number of elements in h
 */
size_t listint_len(const listint_t *h)
{
	size_t ele_counter = 0;

	while (h)
	{
		ele_counter++;
		h = h->next;
	}
	return (ele_counter);
}

