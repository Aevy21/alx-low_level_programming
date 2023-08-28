#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to the head of the linked list.
 * @index: The index of the desired node, starting at 0.
 * Return: If the node exists, a pointer to the nth node; otherwise, NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = 0;

	current = head;

	for (; current != NULL; i++)
	{
		if (i == index)
		{
			return (current);
		}
		current = current->next;
	}

	return (NULL);
}

