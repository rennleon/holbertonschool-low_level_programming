#include "holberton.h"

/**
 * binary_to_uint - Prints a binary number in decimal
 * @b: String representing the number
 *
 * Return: Decimal representation of the number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b < '0' || *b > '1')
			return (0);

		num = num << 1;

		if (*b == '1')
			num = num | 1;

		b++;
	}

	return (num);
}
