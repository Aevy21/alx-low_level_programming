#include "hash_tables.h"

/**
 * key_index - Calculates the index for a key in a hash table
 * @key: The key
 * @size: The size of the array (hash table)
 *
 * Return: The index at which the key should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_code = hash_djb2(key);
	unsigned long int index = hash_code % size;

	return (index);
}
