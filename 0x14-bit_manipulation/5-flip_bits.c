#include "holberton.h"

/**
 * flip_bits - Calculates the number of bits needed to transform n into m
 * @n: First number
 * @m: Second number
 *
 * Return: Number of bits that need to be flipped to tranform n into m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count_diff_bits = 0;

	while (n > 0 || m > 0)
	{
		if ((n ^ m) & 1)
			count_diff_bits++;

		n = n >> 1;
		m = m >> 1;
	}

	return (count_diff_bits);
}
