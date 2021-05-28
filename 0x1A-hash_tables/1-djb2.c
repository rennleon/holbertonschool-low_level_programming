#include "hash_tables.h"

/**
 * hash_djb2 - Implementation of sjb2 algorithm
 * @str: String value from which to calculate the hash
 *
 * Return: Number representing the hash of the entered value
*/
unsigned long int hash_djb2(const unsigned char *str)
{
	int c;
	unsigned long int hash;

	hash = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return (hash);
}
