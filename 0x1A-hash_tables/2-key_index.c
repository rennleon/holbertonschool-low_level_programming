#include "hash_tables.h"

/**
 * key_index - Returns the index at wich a string should
 *             be placed into in the hash table
 * @key: String value from which to calculate the hash
 * @size: Hassh tables' size
 *
 * Return: Index at wich the value should be placed into the hash table
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (size == 0)
		return (0);

	return (hash_djb2(key) % size);
}
