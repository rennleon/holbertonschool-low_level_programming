#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: Pointer t the hash table
 * @key: String from which to calculate the hash
 * @value: String to be stored in the hash table
 *
 * Return: 1 on success, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int index, hash;

	if (ht == NULL || ht->array == NULL || key == NULL || *key == '\0')
		return (0);

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	hash = hash_djb2((const unsigned char *)key);
	index = hash % ht->size;

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
