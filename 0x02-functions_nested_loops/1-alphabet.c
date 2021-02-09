#include "holberton.h"
/**
 * print_alphabet - print th alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);

	_putchar('\n');
}
