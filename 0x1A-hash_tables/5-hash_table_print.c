#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: Pointer to the hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t **array, *curr;
	char *sep = "";

	if (ht == NULL)
		return;

	printf("{");
	array = ht->array;
	for (i = 0; i < ht->size; i++)
		for (curr = array[i]; curr != NULL; sep = ", ", curr = curr->next)
			printf("%s'%s': '%s'", sep, curr->key, curr->value);
	printf("}\n");
}
