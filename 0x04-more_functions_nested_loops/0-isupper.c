#include "holberton.h"

/**
 * _isupper - Checks if a char is uppercase
 * @c: char to be evaluated
 *
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
