#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints a list of numbers
 * @separator: Separator to be printed between the numbers
 * @n: Number of nums to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int iter;
	va_list arg_list;
	int arg_value;

	va_start(arg_list, n);

	for (iter = 0; iter < n - 1; iter++)
	{
		arg_value = va_arg(arg_list, int);
		printf("%d%s", arg_value, separator);
	}

	printf("%d\n", va_arg(arg_list, int));

	va_end(arg_list);
}
