#include "holberton.h"

/**
 * print_number - Prints an integer char by char
 * @n: number to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	int rev;
	int is_negative;

	rev = 1;
	is_negative = 0;

	if (n < 0)
	{
		n *= -1;
		is_negative = 1;
	}

	do {
		rev *= 10;
		rev += n % 10;
		n = n / 10;
	} while (n > 0);

	if (is_negative)
		_putchar('-');

	do {
		_putchar('0' + (rev % 10));
		rev /= 10;
	} while (rev >= 10);
}
