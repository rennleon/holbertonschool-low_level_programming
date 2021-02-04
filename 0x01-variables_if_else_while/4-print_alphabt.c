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

	for (c = 97; c <= 122; c++)
		if (c != 101  && c != 113)
			putchar(c);

	/* print a new line */
	putchar(10);

	return (0);
}
