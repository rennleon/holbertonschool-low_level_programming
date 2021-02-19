#include "holberton.h"
#include <stdio.h>
#include <ctype.h>

char _get_char(char);

/**
 * print_buffer - Prints a buffer
 * @b: Buffer to be printed
 * @size: Size of each block of the buffer
 */
void print_buffer(char *b, int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = 0; j < 10; j += 2)
		{
			if (i + j < size)
			{
				printf("%02x", b[i + j]);

				if (i + j + 1 < size)
					printf("%02x ", b[i + j + 1]);
				else
					printf("   ");
			}
			else
				printf("     ");
		}

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%c", _get_char(b[i + j]));
		}

		printf("\n");
	}
}

/**
 * _get_char - Evaluates a char ande returns it if
 * is printable, if not, returns '.'
 * @c: Char to be evaluated
 *
 * Return: A printable char
 */
char _get_char(char c)
{
	if (isprint(c))
		return (c);

	return ('.');
}
