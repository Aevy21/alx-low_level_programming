#include "lists.h"

/**
 *delete_nodeint_at_index - Deletes a node at
*a specific index in a linked list.
 * @head: A pointer to a pointer to the head of the linked list.
 * @index: The index of the node to delete (index starts at 0).
 *
 * Return: 1 if successful, -1 if failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *previous;
	listint_t *current;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	previous = *head;
	current = (*head)->next;

	for (i = 1; i < index && current != NULL; i++)
	{
		previous = current;
		current = current->next;
	}

	if (current == NULL)
		return (-1);

	previous->next = current->next;
	free(current);
	return (1);
}

