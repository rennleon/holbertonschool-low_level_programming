#include "holberton.h"
/**
 * _abs - Computes the absolute value of an integer
 * @n: number to be evaluated
 *
 * Return: The absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
		return (-1 * n);

	return n;
}
