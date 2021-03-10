#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Executes f with name as argument
 * @name: String to be passed as argument to f
 * @f: pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
