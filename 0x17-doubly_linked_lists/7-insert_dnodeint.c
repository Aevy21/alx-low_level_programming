#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a new node at a given position of list
 * @h: Pointer to a pointer to the head of the list
 * @idx: The index at which to insert the new node (starting from 0)
 * @n: Value to be stored in the new node
 *
 * Return: The address of the new node, or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current = *h;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
		/* Utilize the existing add_dnodeint function to insert at the beginning. */
	}

	while (current)
	{
		if (count == idx - 1)
		{
			new_node = malloc(sizeof(dlistint_t));
			if (new_node == NULL)
				return (NULL);

			new_node->n = n;
			new_node->prev = current;
			new_node->next = current->next;
			if (current->next)
				current->next->prev = new_node;
			current->next = new_node;

			return (new_node);
		}

		count++;
		current = current->next;
	}

	return (NULL); /* Failed to insert at the specified index. */
}

