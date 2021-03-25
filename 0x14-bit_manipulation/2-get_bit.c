#include "holberton.h"

/**
 * get_bit - Gets the value of a bit at certain index
 * @n: Number to be represented as binary
 * @index: Bit index to get the value
 *
 * Return: Value of bit at specified index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bits_n = sizeof(n) * 8;
	unsigned long int mask;

	if (index > bits_n)
		return (-1);

	if (index == 0)
		return (n & 1);

	mask = 1 << (index);

	if (n & mask)
		return (1);

	return (0);
}
