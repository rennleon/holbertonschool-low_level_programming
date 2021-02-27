#include <stdio.h>
#include <stdlib.h>

int is_number(char *);

/**
 * main - Entry point
 * @argc: Number of arguments passed to the program
 * @argv: Array of strings that are the actual arguments passed to the program
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned long sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (is_number(argv[i]))
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%ld\n", sum);

	return (0);
}

/**
 * is_number - Verifies if a string is composed only by numbers
 * @s: String to be verified
 *
 * Return: 1 if string contains only numbers, 0 otherwise
 */
int is_number(char *s)
{
	while (*s != '\0')
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}

	return (1);
}
