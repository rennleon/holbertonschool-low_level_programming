#include <string.h>
#include "holberton.h"

/**
 * rev_string - Reverses a string
 * @s: String to be reversed
 */
void rev_string(char *s)
{
	int i;
	int len;
	int middle;
	char aux;

	len = strlen(s);
	middle = len / 2;

	for(i = 0; i < middle; i++)
	{
		aux = s[i];
		s[i] = s[len-i-1];
		s[len-i-1] = aux;
	}
}
