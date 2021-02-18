#include "holberton.h"

/**
 * string_toupper - Changes all lowercase chars to uppercase
 * @str: String to be modified
 *
 * Return: Pointer to str
 */
char *string_toupper(char *str)
{
	char *curr = str;

	while (*curr != '\0')
	{
		if (*curr >= 'a' && *curr <= 'z')
			*curr -= 32;
		curr++;
	}

	return (str);
}
