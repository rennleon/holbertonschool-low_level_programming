#include "holberton.h"

/**
 * print_binary - Prints a binary representation of a number
 * @n: Number to be represented as binary
 */
void print_binary(unsigned long int n)
{
	int idx, bits_n = sizeof(n) * 8;
	unsigned long int mask;

	if (n <= 1)
	{
		_putchar('0' + n);
		return;
	}

	for (idx = bits_n; idx > 0; idx--)
		if (n & (1 << (idx - 1)))
			break;

	mask = 1 << (idx - 1);

	while (mask > 0)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');
		mask = mask >> 1;
	}
}
