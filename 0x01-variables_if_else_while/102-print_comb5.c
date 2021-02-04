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
	int i, j, k, l;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			l = j + 1;
			for (k = i; k <= 57; k++)
			{
				for (; l <= 57; l++)
				{
					putchar(i);
					putchar(j);

					putchar(32);

					putchar(k);
					putchar(l);

					if (i < 57 || j < 56)
					{
						putchar(44);
						putchar(32);
					}
				}
				l = 48;
			}
		}
	}

	/* print a new line */
	putchar(10);

	return (0);
}
