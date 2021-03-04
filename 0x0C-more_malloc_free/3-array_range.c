#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - Creates and array of integers
 * @min: Array's min value
 * @max: Array's max value
 *
 *  Return: Pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int val, len;
	int *arr;

	if (min > max)
		return (NULL);

	len = max - min + 1;
	arr = malloc(len * sizeof(*arr));

	if (arr == NULL)
		return (NULL);

	for (val = min; val <= max; val++)
		arr[val - min] = val;

	return (arr);
}
