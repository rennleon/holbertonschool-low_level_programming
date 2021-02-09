#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	int n1, n2;
	int sum;

	n1 = 0;
	n2 = 1;

	for (i = 0; i < 49; i++)
	{
		sum = n1 + n2;

		printf("%d, ", sum);

		n1 = n2;
		n2 = sum;
	}

	printf("%d\n", (n1 + n2));

	return (0);
}

