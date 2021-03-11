#ifndef VARIADIC_FUNC_H
#define VARIADIC_FUNC_H

#include <stdarg.h>

int _putchar(char);

/* 0x10 */
int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

/**
 * struct fmt - Structure to mathc char format to function to print
 * @in: Char representing the format
 * @fn: Function pointer to print an arg
 */
typedef struct fmt
{
	char in;
	void (*fn)(va_list);
} fmt;


#endif /* VARIADIC_FUNC_H */
