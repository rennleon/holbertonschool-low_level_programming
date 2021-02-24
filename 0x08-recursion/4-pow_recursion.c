#include "holberton.h"

/**
 * _pow_recursion - Calculates the power x raised to y
 * @x: Base number
 * @y: Power number
 *
 * Return: Power of x raised to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	if (y == 1)
		return (x);

	return (x * _pow_recursion(x, y - 1));
}
