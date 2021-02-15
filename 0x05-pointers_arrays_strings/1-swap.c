#include "holberton.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: memory adress of first number
 * @b: memory adress of second number
 */
void swap_int(int *a, int *b)
{
	int aux = *a;
	*a = *b;
	*b = aux;
}
