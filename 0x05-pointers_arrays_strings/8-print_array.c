#include <stdio.h>
#include "holberton.h"

/**
 * print_array - Prints "n" elemnts of an array "a"
 * @a: Array of numbers
 * @n: Number of elements to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
		printf("%d, ", *(a + i));

	printf("%d\n", *(a + i));
}
