#include "hash_tables.h"
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
/**
 * hash_table_set - Adds an element to the hash table
 * @ht: The hash table
 * @key: The key
 * @value: The value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;
	hash_node_t *temp;

	/* Check for invalid parameters */
	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	/* Calculate the index using the hash function */
	index = hash_djb2((unsigned char *)key) % ht->size;

	/* Check for an existing key in the linked list */
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			/* Key already exists, update its value */
			free(temp->value);
			temp->value = strdup(value);
			if (temp->value == NULL)
			{
				return (0); /* Memory allocation failed */
			}
			return (1); /* Update successful */
		}
		temp = temp->next;
	}

	/* If key doesn't exist, create a new node and add it at the beginning */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	/* Duplicate the key */
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	/* Duplicate the value */
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	/* Collision: Add new node at the beginning of the list */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1); /* Operation succeeded */
}

