#include "holberton.h"

/**
 * rot13 - Encodes a string using rot13
 * @str: String to be encoded
 *
 * Return: Pointer to str
 */
char *rot13(char *str)
{
	int i;
	char *curr = str;
	char bound[] = {'a', 'z', 'A', 'Z'};

	/*
	 * Example for lowercase rotation
	 *	if (*curr >= 'a' && *curr <= 'z')
	 *		*curr = 'a' + ( ( (*curr - 'a') + 13 ) % 26 );
	 */

	while (*curr != '\0')
	{
		for (i = 0; i < 4; i += 2)
			if (*curr >= bound[i] && *curr <= bound[i + 1])
			{
				*curr = bound[i] + (((*curr - bound[i]) + 13) % 26);
				break;
			}

		curr++;
	}

	return (str);
}
