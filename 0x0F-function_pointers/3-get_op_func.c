#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - Returns a function based on s operation argument
 * @s: String defining the arihmetic operation to be performed
 *
 * Return: A pointer to the arithmetic function
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);

		i++;
	}

	return (NULL);
}
