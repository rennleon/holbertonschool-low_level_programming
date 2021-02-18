#include "holberton.h"

/**
 * _strcmp - Compares two strings
 * @s1: First String
 * @s2: Second string
 *
 * Return: Integer greater than, equal, or less than zero
 */
int _strcmp(char *s1, char *s2)
{
	int diff = 0;

	while (*s1 != '\0' && *s2 != '\0')
	{
		diff = *s1 - *s2;
		s1++, s2++;

		if (diff != 0)
			return (diff);
	}

	if (*s1 == '\0' && *s2 != '\0')
		return (-(int)*s2);

	if (*s2 == '\0' && *s1 != '\0')
		return ((int)*s1);

	return (0);
}
