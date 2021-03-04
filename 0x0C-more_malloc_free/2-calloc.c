#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - Allocates memory for an array
 * @nmemb: Number of array elements
 * @size: Ssize in bytes for each element
 *
 *  Return: Pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pointer;
	unsigned int i;
	unsigned int alloc_size;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	alloc_size = nmemb * size;
	pointer = malloc(alloc_size);

	if (pointer == NULL)
		return (NULL);

	for (i = 0; i < alloc_size; i++)
		*((char *)pointer) = 0;

	return (pointer);
}
