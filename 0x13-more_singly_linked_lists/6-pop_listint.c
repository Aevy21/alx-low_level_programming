#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list and returns its data.
 * @head: Pointer to a pointer to the listint_t list.
 * Return: The data stored in the deleted node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	data = temp->n;

	*head = temp->next;
	free(temp);

	return (data);
}

