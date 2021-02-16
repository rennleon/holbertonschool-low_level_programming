#include "holberton.h"

/**
 * _strlen - Calculates and returns the lenght of a string
 * @s: String which length will be calculated
 *
 * Return: Length of "s"
 */
int _strlen(char *s)
{
	int len;

	len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}

	return (len);
}
