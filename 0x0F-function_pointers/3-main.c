#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - Entry point
 * @argc: Number of args
 * @argv: Array of string args
 *
 * Return: 0 on sucess, otherwise returns error code
 */
int main(int argc, char **argv)
{
	int (*oper)(int, int) = NULL;
	int n1 = 0, n2 = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	oper = get_op_func(argv[2]);
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	if (oper == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", oper(n1, n2));

	return (0);
}
