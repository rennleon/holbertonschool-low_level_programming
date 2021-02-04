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

	
	for (c = 48; c <= 57; c++)
		putchar(c);

	for (c = 97; c <= 102; c++)
		putchar(c);

	/* print a new line */
	putchar(10);

	return (0);
}
