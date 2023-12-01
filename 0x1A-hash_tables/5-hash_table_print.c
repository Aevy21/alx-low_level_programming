#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i = 0;

	if (ht == NULL)
	{
		return; /* Do nothing if the hash table is NULL*/
	}

	printf("{");
	for (; i < ht->size; ++i)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			printf("'%s': '%s'", current->key, current->value);
			if (current->next != NULL)
			{
				printf(", ");
			}
			current = current->next;
		}
	}
	printf("}\n");
}
