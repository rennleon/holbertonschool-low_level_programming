#include "holberton.h"
/**
 * print_sign - Checks for sign of a number
 * @n: number to be evaluated
 *
 * Return: 1 if n>0, 0 if n==0 or -1 if n<0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	_putchar('-');
	return (-1);
}
