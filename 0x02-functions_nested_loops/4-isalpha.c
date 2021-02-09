#include "holberton.h"
/**
 * _isalpha - Checks if a char is lower or uppercase
 * @c: ascii code of char to be evalated
 *
 * Return: 1 if the char is alphabetic or 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);

	return (0);
}
