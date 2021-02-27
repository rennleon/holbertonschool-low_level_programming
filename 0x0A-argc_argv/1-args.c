#include <stdio.h>

/**
 * main - Entry point
 * @argc: Number of arguments passed to the program
 * @argv: Array of strings that are the actual arguments passed to the program
 *
 * Return: Always 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
