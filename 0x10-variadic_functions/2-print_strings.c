#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints a list of strings
 * @separator: String representing a separator
 * @n: Number of string to be printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg_list;
	unsigned int iter;
	char *arg_value;

	if (n <= 0)
	{
		printf("\n");
		return;
	}

	va_start(arg_list, n);

	for (iter = 0; iter < n; iter++)
	{
		arg_value = va_arg(arg_list, char *);

		if (arg_value)
			printf("%s", arg_value);
		else
			printf("(nill)");

		if (separator && iter < n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(arg_list);
}
