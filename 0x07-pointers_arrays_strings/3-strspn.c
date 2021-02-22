#include "holberton.h"

int char_accepted(char *, char);

/**
 * _strspn - Gets the length of a prefix substring
 * @s: String in wich to search chars
 * @accept: Set of chars that are accepted
 *
 * Return: Length of string that is entirely formed with accept chars
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	unsigned int max_count = 0;

	while (*s != '\0')
	{
		if (char_accepted(accept, *s))
			count++;
		else
		{
			if (count > max_count)
				max_count = count;
			count = 0;
		}
		s++;
	}

	return max_count;
}

/**
 * char_accepted - Evaluated if a char is in the set of accepted chars
 * @accepted: Sset of accepted chars
 * @c: Char to be evaluated
 *
 * Return: 1 if c is in accepted, 0 otherwise
 */
int char_accepted(char *accept, char c)
{
	while(*accept != '\0')
	{
		if (*accept == c)
			return (1);
		accept++;
	}

	return (0);
}
