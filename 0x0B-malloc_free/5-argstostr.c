#include "holberton.h"
#include <stdlib.h>

int get_len(char *);
void append_chars(char *, char *, int *);

/**
 * argstostr - Concatenates all string of av into a sigle string
 * @ac: Length of av
 * @av: Array of strings
 *
 * Return: A pointer to the concatenaded string
 */
char *argstostr(int ac, char **av)
{
	int i;
	int len = 0;
	int curr_pos = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Adds 1 for the \n char after each string */
	for (i = 0; i < ac; i++)
		len += get_len(av[i]) + 1;

	/* For the null char at the end */
	len++;

	str = malloc(len * sizeof(char));

	for (i = 0; i < ac; i++)
		append_chars(str, av[i], &curr_pos);

	str[len] = '\0';

	return (str);
}

/**
 * get_len - Calculates the length of a string
 * @s: String from which to calculate the length
 *
 * Return: Length of s
 */
int get_len(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * append_chars - Appends chars from one string to another
 * @dest: Destiny buffer
 * @src: Source buffer
 * @curr_index: Pointer to current index position from which to start appending
 */
void append_chars(char *dest, char *src, int *curr_index)
{
	while (*src != '\0')
	{
		dest[*curr_index] = *src;
		*curr_index += 1;
		src++;
	}

	dest[*curr_index] = '\n';
	*curr_index += 1;
}
