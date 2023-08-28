#include "lists.h"

/**
 *free_listint2- Frees a linked list of listint_t nodes and sets head to NULL.
 * @head: Pointer to the head of the list.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
