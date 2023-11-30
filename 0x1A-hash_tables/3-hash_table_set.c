#include "hash_tables.h"

/**
 * create_node - Creates a new hash node
 * @key: The key
 * @value: The value
 *
 * Return: A pointer to the new hash node, or NULL on failure
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	return (new_node);
}
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
	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	unsigned long int index = hash_djb2((unsigned char *)key) % ht->size;
	hash_node_t *new_node = create_node(key, value);

	if (new_node == NULL)
		return (0);

	/* Collision: Add new node at the beginning of the list */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
