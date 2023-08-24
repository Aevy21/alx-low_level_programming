#include "lists.h"

/**
 * print_list - Print all the elements of a list_t list
 * @h: A pointer to the head of the linked list
 *
 * Return: The number of nodes in the linked list
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;
	
	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		node_count++;
	}
	return (node_count);
}

