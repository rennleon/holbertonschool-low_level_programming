#include "holberton.h"

/**
 * puts2 - Prints every char in odd position of a string
 * @str: String to be reversed
 */
void puts2(char *str)
{
	int i;

	while (*(str + i) != '\0')
		if (i++ % 2 == 0)
			_putchar(str[i - 1]);

	_putchar('\n');
}
