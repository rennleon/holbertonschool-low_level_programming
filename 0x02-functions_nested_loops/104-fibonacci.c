#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	double n1, n2;
	double sum;

	n1 = 0;
	n2 = 1;

	for (i = 0; i < 97; i++)
	{
		sum = n1 + n2;

		printf("%.0lf, ", sum);

		n1 = n2;
		n2 = sum;
	}

	printf("%.0lf\n", (double)(n1 + n2));

	return (0);
}

