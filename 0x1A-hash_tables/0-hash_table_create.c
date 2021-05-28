#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table of 'size' size
 * @size: Size of the newly ceated hash table
 *
 * Return: Pointer to newly allocated memory
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	return (malloc(sizeof(hash_table_t) * size));
}
