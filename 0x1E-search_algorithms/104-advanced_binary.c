#include "search_algos.h"

/**
 * print_subarr - Prints a subarray between two indexes
 * @arr: Array of integers
 * @l: Left index
 * @r: Right index
 */
void print_subarr(int *arr, int l, int r)
{
	int i;
	char *sep = "";

	printf("Searching in array: ");
	for (i = l; i <= r; i++)
	{
		printf("%s%d", sep, arr[i]);
		sep = ", ";
	}
	printf("\n");
}

/**
 * search_rec - Searches a value in an array of integers
 * @arr: Array of integers
 * @l: Left index
 * @r: Right index
 * @value: Value to search
 *
 * Return: Index at which the value was found, -1 otherwise
 */
int search_rec(int *arr, int l, int r, int value)
{
	int mid;

	if (l > r)
		return (-1);

	print_subarr(arr, l, r);

	if (l == r)
		return ((arr[l] == value) ? l : -1);

	if (arr[l] == value)
		return (l);

	mid = (l + r) / 2;
	if (value > arr[mid])
		l = mid + 1;
	else
		r = mid;

	return (search_rec(arr, l, r, value));
}

/**
 * advanced_binary - Searches a value in an array of integers
 * @array: Array of integers
 * @size: Array's size
 * @value: Value to search
 *
 * Return: Index at which the value was found, -1 otherwise
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);

	return (search_rec(array, 0, size - 1, value));
}
