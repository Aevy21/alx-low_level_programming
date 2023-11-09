#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete a node at a specific index
 * @head: Pointer to a pointer to the head of the list
 * @index: The index of the node to delete (starting from 0)
 *
 * Return: 1 if the deletion succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1); /* Failed, list is empty or head is NULL */

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		if (*head)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	while (current && count < index)
	{
		count++;
		current = current->next;
	}

	if (current == NULL)
		return (-1); /* Failed, index is out of range */

	temp = current->prev;
	temp->next = current->next;

	if (current->next)
		current->next->prev = temp;

	free(current);

	return (1);
}

