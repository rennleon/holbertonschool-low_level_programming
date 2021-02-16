#include "holberton.h"

int is_digit(char c);
int is_alpha(char c);

/**
 * _atoi - Converts a string to an integer
 * @s: String to be converted to integer
 *
 * Return: An integer obtained from the string or 0 if no digit
 * was found
 */
int _atoi(char *s)
{
	int sign;
	int value;
	int digit_passed;

	sign = 1;
	value = 0;
	digit_passed = 0;

	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
			value *= 10;
			/* Get int value instead of ascii code */
			value += (*s) - '0';
			digit_passed = 1;
		}
		else if (digit_passed == 1)
			return (value * sign);
		else if (*s == '-')
			sign *= -1;

		s++;
	}

	return (value * sign);
}
