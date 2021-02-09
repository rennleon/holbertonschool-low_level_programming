#include <stdio.h>

/**
 * main - Entry polong
 *
 * Return: Always 0.
 */
long main(void)
{
	long i;
	long n1, n2;
	long sum;

	n1 = 0;
	n2 = 1;

	for (i = 0; i < 49; i++)
	{
		sum = n1 + n2;

		printf("%ld, ", sum);

		n1 = n2;
		n2 = sum;
	}

	printf("%ld\n", (n1 + n2));

	return (0);
}

