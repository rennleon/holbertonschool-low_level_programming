#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "variadic_functions.h"

void fnChar(va_list args_list);
void fnInt(va_list args_list);
void fnFloat(va_list args_list);
void fnStr(va_list args_list);

/**
 * print_all - Prints values based on the passed format
 * @format: String containing the format for each value
 *
 */
void print_all(const char * const format, ...)
{
	fmt fmts[] = {
		{'c', fnChar},
		{'i', fnInt},
		{'f', fnFloat},
		{'s', fnStr},
		{'\0', NULL}
	};

	int iformat = 0;
	int ifmt;
	va_list args_list;
	char *separator = "";

	va_start(args_list, format);

	while (format && format[iformat] != '\0')
	{
		ifmt = 0;

		while (fmts[ifmt].in != '\0')
		{
			if (fmts[ifmt].in == format[iformat])
			{
				printf("%s", separator);
				fmts[ifmt].fn(args_list);
				break;
			}
			ifmt++;
		}

		separator = ", ";

		iformat++;
	}

	va_end(args_list);

	printf("\n");
}

/**
 * fnChar - Prints a char arg
 * @args_list: List of variadic args
 */
void fnChar(va_list args_list)
{
	printf("%c", va_arg(args_list, int));
}

/**
 * fnInt - Prints an int arg
 * @args_list: List of variadic args
 */
void fnInt(va_list args_list)
{
	printf("%i", va_arg(args_list, int));
}

/**
 * fnFloat - Prints a float arg
 * @args_list: List of variadic args
 */
void fnFloat(va_list args_list)
{
	printf("%f", va_arg(args_list, double));
}

/**
 * fnStr - Prints a string arg
 * @args_list: List of variadic args
 */
void fnStr(va_list args_list)
{
	char *str = va_arg(args_list, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}
