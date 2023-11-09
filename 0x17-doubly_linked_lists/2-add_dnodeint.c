#include "lists.h"

/**
 * add_dnodeint - Add a new node at the beginning of a dlistint_t list
 * @head: Pointer to a pointer to the head of the list
 * @n: Value to be stored in the new node
 *
 * Return: The address of the new element, or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);
	/* allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));
	/* neccessary to check if memory allocation was successful */
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;/* step neccessary to ensure new node data stored accurately*/
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}

