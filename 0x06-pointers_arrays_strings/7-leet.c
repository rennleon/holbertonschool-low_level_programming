#include "holberton.h"

/**
 * leet - Encodes a string into 1337
 * @str: String to be encoded
 *
 * Return: Pointer to str
 */
char *leet(char *str)
{
	int i;
	char *curr = str;
	char lower[] = {'a', 'e', 'o', 't', 'l'};
	/*    upper      A    E    O    T    L*/
	char encode[] = {4, 3, 0, 7, 1};

	while (*curr != '\0')
	{
		for (i = 0; i < 5; i++)
			if (*curr == lower[i] || *curr == (lower[i] - 32))
			{
				*curr = '0' + encode[i];
				break;
			}

		curr++;
	}

	return (str);
}
