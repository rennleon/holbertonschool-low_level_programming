#include "hash_tables.h"

/**
 * hash_table_get - Gets an element from the hash table
 * @ht: Pointer t the hash table
 * @key: String from which to calculate the hash
 *
 * Return: Pointer to the hashed element, NULL on failure
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *curr;
	unsigned long int index, hash;

	if (ht == NULL || ht->array == NULL || key == NULL || *key == '\0')
		return (NULL);

	hash = hash_djb2((const unsigned char *)key);
	index = hash % ht->size;

	if ((ht->array)[index] == NULL)
		return (NULL);

	for (curr = (ht->array)[index]; curr != NULL; curr = curr->next)
		if (strcmp(curr->key, key) == 0)
			return (curr->value);

	return (NULL);
}
