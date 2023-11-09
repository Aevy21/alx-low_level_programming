#include "lists.h"

/**
 * get_dnodeint_at_index - Get the nth node of a dlistint_t list
 * @head: Pointer to the head of the list
 * @index: The index of the node to retrieve (starting from 0)
 *
 * Return: The nth node or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
			return current;
		count++;
		current = current->next;
	}

	return NULL; /* Node with the specified index doesn't exist*/
}

