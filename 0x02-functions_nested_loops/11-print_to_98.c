#include <stdio.h>
#include "holberton.h"
/**
 * print_to_98 - Prints the numbers from n to 98
 * @n: starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i;
	int inc_dec;

	inc_dec = 1;

	if (n > 98)
		inc_dec = -1;

	for (i = n; i != 98; i += inc_dec)
	{
		printf("%d, ", i);
	}

	printf("%d\n", 98);
}
