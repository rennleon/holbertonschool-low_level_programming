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
	{
		putchar(c);

		if (c < 57)
		{
			putchar(44);
			putchar(32);
		}
	}

	/* print a new line */
	putchar(10);

	return (0);
}
