#include "holberton.h"

/**
 * puts_half - Prints second half of a string
 * @str: String which second half will be printed
 */
void puts_half(char *str)
{
	int i;
	int len;
	int start;

	len = 0;

	while (*(str + len) != '\0')
		len++;

	start = len / 2;

	if (len % 2 != 0)
		start++;

	for (i = start; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
