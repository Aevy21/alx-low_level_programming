#include "lists.h"

/**
 * add_node - adds a new_ptr node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new_ptr string to add in the node
 *
 * Return: the address of the new_ptr element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_ptr;
	unsigned int nodes = 0;

	while (str[nodes])
		nodes++;

	new_ptr = malloc(sizeof(list_t));
	if (!new_ptr)
		return (NULL);

	new_ptr->str = strdup(str);
	new_ptr->len = nodes;
	new_ptr->next = (*head);
	(*head) = new_ptr;

	return (*head);
}

