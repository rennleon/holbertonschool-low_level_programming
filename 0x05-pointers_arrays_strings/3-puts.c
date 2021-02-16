#include "holberton.h"

/**
 * _puts - Prints a string to stdout
 * @str: String to be printed
 */
void _puts(char *str)
{
	int len;

	len = 0;

	while (*(str + len) != '\0')
		_putchar(*(str + len++));

	_putchar('\n');
}
