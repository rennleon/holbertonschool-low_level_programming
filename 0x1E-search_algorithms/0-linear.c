#include "search_algos.h"

/**
 * linear_search - Searches a value in an array of integers
 * @array: Array of integers
 * @size: Array's size
 * @value: Value to search
 *
 * Return: Index at which the value was found, -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
