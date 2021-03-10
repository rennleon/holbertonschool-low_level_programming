#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - Apllies cmp function to each array node and returns the index
 * @array: Array of integers
 * @size: Ssixe of array
 * @cmp: Pointer to a function
 *
 * Return: Index of the element if cmp(array[ind]) == 0, -1 otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]) != 0)
			return (i);

	return (-1);
}
