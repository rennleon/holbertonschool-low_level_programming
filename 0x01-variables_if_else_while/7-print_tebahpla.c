#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	for (c = 122; c >= 97; c--)
		putchar(c);

	/* print a new line */
	putchar(10);

	return (0);
}
