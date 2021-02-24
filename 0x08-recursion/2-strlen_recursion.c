#include "holberton.h"

/**
 * _strlen_recursion - Calculates the length of a string
 * @s: String of chars
 *
 * Return: Lenght of string s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
