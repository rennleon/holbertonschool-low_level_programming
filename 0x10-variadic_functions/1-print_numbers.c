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
	char *sep = "";

	va_start(arg_list, n);

	for (iter = 0; iter < n; iter++)
	{
		arg_value = va_arg(arg_list, int);
		printf("%s%d", sep, arg_value);
		sep = separator;
	}

	printf("\0");

	va_end(arg_list);
}
