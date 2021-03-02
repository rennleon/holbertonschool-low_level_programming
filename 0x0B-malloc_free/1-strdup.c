#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Copies a string to a new memory location
 * @str: String to be copies
 *
 * Return: Pointer to the new memory location
 */
char *_strdup(char *str)
{
	int i;
	char *arr;
	int len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	arr = malloc((len + 1) * sizeof(char));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		arr[i] = str[i];

	return (arr);
}
