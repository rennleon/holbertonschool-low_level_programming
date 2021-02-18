#include "holberton.h"

/**
 * _strcmp - Compares two strings
 * @s1: First String
 * @s2: Second string
 *
 * Return: Integer greater than, equal, or less than zero
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
