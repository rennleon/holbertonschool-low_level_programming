#include "search_algos.h"

/**
 * jump_search - Searches a value in a sorted array of integers
 * @array: Array of integers
 * @size: Array's size
 * @value: Value to search
 *
 * Return: Index at which the value was found, -1 otherwise
 */
int jump_search(int *array, size_t size, int value)
{
	int step = sqrt(size);
	size_t lo = 0, hi = 0;

	if (!array)
		return (-1);

	while (hi < size && array[hi] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", hi, array[hi]);
		lo = hi;
		hi += step;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", lo, hi);

	for (; lo < size && lo <= hi; lo++)
	{
		printf("Value checked array[%lu] = [%d]\n", lo, array[lo]);
		if (array[lo] == value)
			return (lo);
	}

	return (-1);
}
