#include "holberton.h"

/**
 * reverse_array - Reverses an array of integers
 * @a: Array of integers
 * @n: Length of the array
 *
 */
void reverse_array(int *a, int n)
{
	int i;
	int aux;
	int middle;

	middle = n / 2;

	for (i = 0; i < middle; i++)
	{
		aux = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = aux;
	}
}
