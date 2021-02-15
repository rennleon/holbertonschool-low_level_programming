#include <stdio.h>
#include <string.h>
#include "holberton.h"

/**
 * puts2 - Prints every char in odd position of a string
 * @str: String to be reversed
 */
void puts2(char *str)
{
	int i;
	int len;

	len = strlen(str);

	for(i = 0; i < len; i++)
		if (i % 2 == 0)
			putchar(str[i]);

	putchar('\n');
}
