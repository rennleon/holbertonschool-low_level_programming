#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

int get_len(char *);
void add_chars(char *, char *, int, int);

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointer to the newly concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int len_s1 = 0, len_s2 = 0;
	int len;

	if (s1 != NULL)
		len_s1 = get_len(s1);

	if (s2 != NULL)
		len_s2 = get_len(s2);

	len = len_s1 + len_s2;

	str = malloc((len + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	add_chars(str, s1, 0, len_s1);
	add_chars(str, s2, len_s1, len_s2);

	str[len] = '\0';

	return (str);
}

/**
 * get_len - Calculates the length of a string
 * @s: String which length will be calculated
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
 * add_chars - Adds chars from src to dest
 * @dest: Destiny buffer
 * @src: Source buffer
 * @start: Start position at dest
 * @src_len: Length of source buffer
 */
void add_chars(char *dest, char *src, int start, int src_len)
{
	int i;

	for (i = 0; i < src_len; i++)
		dest[start++] = src[i];
}
