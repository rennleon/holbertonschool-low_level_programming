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

	sign = 1;
	value = 0;

	while (*s != '\0')
	{
		if (is_digit(*s))
		{
			value *= 10;
			/* Get int value instead of ascii code */
			value += (*s) - '0';
		}
		else if (value > 0)
			return (value * sign);
		else if (*s == '-')
			sign *= -1;

		s++;
	}

	return (value * sign);
}

/**
 * is_digit - Evaluates if a char is a digit
 * @c: char to be evaluated
 *
 * Return: 1 if c is digit, 0 otherwise
 */
int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * is_alpha - Evaluates if a char is a letter
 * @c: char to be evaluated
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int is_alpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
