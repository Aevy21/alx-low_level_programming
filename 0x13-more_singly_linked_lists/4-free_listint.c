#include "lists.h"

/**
 * free_listint - Frees a linked list of listint_t nodes.
 * @head: Pointer to the head of the list.
 */
void free_listint(listint_t *head)
{
	listint_t *hold_temp;

	while (head)
	{
		hold_temp = head->next;
		free(head);
		head = hold_temp;
	}
}

