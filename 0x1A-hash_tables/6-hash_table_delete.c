#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: The hash table to be deleted.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;

	if (ht == NULL)
	{
		return; /* Do nothing if the hash table is NULL */
	}

	for (; i < ht->size; ++i)
	{
		free_list(ht->array[i]); /* Free each linked list in the array */
	}

	free(ht->array); /* Free the array */
	free(ht); /* Free the hash table structure */
}

/**
 * free_list - Frees the linked list at a specific index.
 * @head: The head of the linked list.
 */
void free_list(hash_node_t *head)
{
	while (head != NULL)
	{
		hash_node_t *temp = head;

		head = head->next;
		free(temp->key);
		free(temp->value);
		free(temp);
	}
}

