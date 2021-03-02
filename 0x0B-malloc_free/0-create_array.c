#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates and initializes an array
 * @size: Size of the array to be created
 * @c: Initial value for every array position
 *
 * Return: Pointer to the new array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(*arr));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
