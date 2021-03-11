#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Sums all the passed arguments
 * @n: Number of arguments to be passed
 *
 * Return: Sum of the arguments value
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int iter;
	va_list arg_list;
	int sum = 0;
	int arg_value;

	if (n <= 0)
		return (0);

	va_start(arg_list, n);

	for (iter = 0; iter < n; iter++)
	{
		arg_value = va_arg(arg_list, int);
		sum += arg_value;
	}

	va_end(arg_list);

	return (sum);
}
