#include <stdio.h>

/**
 * main - Entry polong
 *
 * Return: Always 0.
 */
long main(void)
{
	long i;
	unsigned long n1, n2;
	unsigned long sum;

	n1 = 0;
	n2 = 1;

	for (i = 0; i < 49; i++)
	{
		sum = n1 + n2;

		printf("%lu, ", sum);

		n1 = n2;
		n2 = sum;
	}

	printf("%lu\n", (n1 + n2));

	return (0);
}

