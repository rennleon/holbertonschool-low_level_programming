#include "holberton.h"
#include <stdlib.h>

int get_strings_count(char *s);
char *get_string(char *s, int *index);
int get_len(char *s);

/**
 * strtow - Splits a string into words
 * @str: String to be splitted
 *
 * Return: Pointer to an array of strings
 */
char **strtow(char *str)
{
	int i, index = 0;
	int arr_len = 0;
	char **strings;

	if (str == NULL || *str == '\0')
		return (NULL);

	arr_len =	get_strings_count(str);

	/* 1 extra space for NULL at the end of array*/
	strings = malloc((arr_len + 1) * sizeof(char *));

	if (strings == NULL || arr_len == 0)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			strings[index] = get_string(str + i, &i);

			if (strings[index] == NULL)
				return (NULL);

			index++;
		}
	}

	strings[arr_len] = NULL;

	return (strings);
}

/**
 * get_strings_count - Calculates the number of individual strings inside s
 * @s: String containing individual strings
 *
 * Return: Quantity of individual strings inside s
 */
int get_strings_count(char *s)
{
	int i, len = 0;
	int counting_chars;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			counting_chars = 0;
		else if (counting_chars == 0)
		{
			len++;
			counting_chars = 1;
		}
	}

	return (len);
}

/**
 * get_string - Puts togheter a string of chars
 * @s: String from wich to take chars
 * @index: Index at wich to start taking the chars
 *
 * Return: A string of chars
 */
char *get_string(char *s, int *index)
{
	int i;
	int len = get_len(s);
	char *substr = malloc((len + 1) * sizeof(char));

	if (substr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		substr[i] = s[i];

	/* To start from the last index substring in the higher loop*/
	*index += len - 1;

	substr[len] = '\0';

	return (substr);
}

/**
 * get_len - Calculates the length of a string
 * at the point it encounters a space
 * @s: String from which to calculate the length
 *
 * Return: Length of char sequence without space
 */
int get_len(char *s)
{
	int len = 0;

	while (s[len] != '\0' && s[len] != ' ')
		len++;

	return (len);
}
