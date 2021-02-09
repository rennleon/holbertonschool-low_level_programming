#include "holberton.h"
/**
 * print_last_digit - Print the last digit of a number
 * @n: number to be evaluated
 *
 * Return: The last digit of n
 */
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;

	if (ld < 0)
		ld = -1 * ld;

	_putchar('0' + ld);

	return (ld);
}
