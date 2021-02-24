#include "holberton.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 * @c: String to be printed
 */
void _puts_recursion(char *c)
{
	if (*c == '\0')
		_putchar('\n');
	else
	{
		_putchar(*c);
		_puts_recursion(c + 1);
	}
}
