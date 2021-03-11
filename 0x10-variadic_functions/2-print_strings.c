#include <stdio.h>
#include <stdarg.h>
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

	va_start(arg_list, n);

	for (iter = 0; iter < n - 1; iter++)
	{
		arg_value = va_arg(arg_list, char *);
		printf("%s%s", arg_value, separator);
	}

	printf("%s\n", va_arg(arg_list, char *));

	va_end(arg_list);
}
