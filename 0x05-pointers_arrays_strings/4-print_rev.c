#include <stdio.h>
#include <string.h>
#include "holberton.h"

/**
 * print_rev - Prints a string in reverse
 * @s: String to be printed
 */
void print_rev(char *s)
{
	int i;
	int len;

	len= strlen(s);

	for(i = len - 1; i >= 0; i--)
		putchar(s[i]);

	putchar('\n');
}
