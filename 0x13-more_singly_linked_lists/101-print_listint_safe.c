#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head of the list
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	size_t node_count = 0;
	listint_t *reversed_head;

	while (current != NULL) 
	{
		printf("[%p] %d\n", (void *)current, current->n);
		node_count++;
		current = current->next;
	}

	current = head;

	reversed_head = reverse_listint(listint_t *head);
	current = reversed_head;

	while (current != NULL) 
	{
		printf("[%p] %d\n", (void *)current, current->n);
		current = current->next;
	}

	if (head <= reversed_head) 
	{
		exit(98);
	}

	return (node_count);
}
