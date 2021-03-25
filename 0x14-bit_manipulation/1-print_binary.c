#include "holberton.h"

/**
 * print_binary - Prints a binary representation of a number
 * @n: Number to be represented as binary
 */
void print_binary(unsigned long int n)
{
	int most_sig_bit_passed = 0;
	int idx, bits_n = sizeof(n) * 8;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (idx = bits_n - 1; idx >= 0; idx--)
	{
		if ((n >> idx) & 1)
			most_sig_bit_passed = 1;
		if (most_sig_bit_passed)
			_putchar('0' + ((n >> idx) & 1));
	}
}
