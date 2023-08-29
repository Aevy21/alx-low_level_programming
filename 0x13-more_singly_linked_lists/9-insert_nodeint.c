#include "lists.h"

/**
 *insert_nodeint_at_index - Inserts a new node at a given position in the list
 * @head: Pointer to the pointer to the head of the list.
 * @idx: The index at which the new node should be inserted.
 * @n: The integer value to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 *otherwise, do not add
 * the new node and return NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0 || *head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (current->next == NULL)
		{
			free(new_node);
			return (NULL);
		}
		current = current->next;
	}
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}


