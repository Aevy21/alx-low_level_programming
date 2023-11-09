#include "lists.h"

/**
 * sum_dlistint - Calculate the sum of all the data (n) in a dlistint_t list
 * @head: Pointer to the head of the list
 *
 * Return: The sum of all the data or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current)
	{
		sum += current->n;  /* Add the data of the current node to the sum */
		current = current->next;  /* Move to the next node */
	}

	return (sum);
}

