#include "holberton.h"

int is_separator(char);
int is_lower(char);

/**
 * cap_string - Capitalizes all words inside a string
 * @str: String to be Capitalzed
 *
 * Return: Pointer to str
 */
char *cap_string(char *str)
{
	char *curr = str;
	int separator_passed = 1;

	while (*curr != '\0')
	{
		if (is_separator(*curr))
			separator_passed = 1;
		else if (separator_passed)
		{
			if (is_lower(*curr))
				*curr -= 32;
			separator_passed = 0;
		}

		curr++;
	}

	return (str);
}

/**
 * is_separator - Evaluates if a char is a separator
 * @c: char to be evaluated
 *
 * Return: 1 if c is separator, 0 otherwise
 */
int is_separator(char c)
{
	if (c == ' ' ||	c == '\t' || c == '\n' ||
			c == ',' ||	c == ';' ||	c == '.' ||
			c == '!' ||	c == '?' ||	c == '\"' ||
			c == '(' ||	c == ')' ||	c == '{' ||
			c == '}')
		return (1);

	return (0);
}

/**
 * is_lower - Evaluates if a char is lowercase
 * @c: char to be evaluated
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int is_lower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	return (0);
}
