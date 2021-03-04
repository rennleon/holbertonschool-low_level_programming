#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates b bytes in memmory using malloc
 * @b: Number of bytes to be allocated
 *
 * Return: pointer to the allocated memmory
 */
void *malloc_checked(unsigned int b)
{
	void *pointer = malloc(b);

	if (pointer == NULL)
		exit(98);

	return (pointer);
}
