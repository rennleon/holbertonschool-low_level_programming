#include <stddef.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Applies action to each array element
 * @array: Array of integers
 * @size: Size of the array
 * @action: Pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}
