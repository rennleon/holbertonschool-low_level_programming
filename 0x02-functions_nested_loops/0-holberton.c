#include <stdio.h>
/* #include "_putchar.c" */

int _putchar(char);

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int i;
	char str[10] = "Holberton";

	for (i = 0; i < 10; i++)
		_putchar(str[i]);

	_putchar('\n');

	return (0);
}
