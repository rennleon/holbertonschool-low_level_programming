#include "holberton.h"
#include <stdlib.h>

int get_len(char *str);
void copy_chars(char *dest, char *src1, char *src2, int copy_len);

/**
 * string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: Number of chars to be copied from s2 to s1
 *
 * Return: Pointer to s1
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int s1_len = get_len(s1);
	int s2_len = get_len(s2);
	char *null_str = "";
	int	copy_len = n;
	char *str;

	if (n > (unsigned int)s2_len)
		copy_len = s2_len;

	str = malloc(s1_len + copy_len + 1);

	if (str == NULL)
		return (NULL);

	if (s1 == NULL)
		s1 = null_str;

	if (s2 == NULL)
		s2 = null_str;

	copy_chars(str, s1, s2, copy_len);

	str[s1_len + copy_len] = '\0';

	return (str);
}

/**
 * get_len - Calculates and returns the length of a string
 * @str: String which length will be calculated
 *
 * Return: Length of str
 */
int get_len(char *str)
{
	int len = 0;

	if (str == NULL)
		return (0);

	while (str[len] != '\0')
		len++;

	return (len);
}

/**
 * copy_chars - Copies chars from src's to dest
 * @dest: Destiny buffer
 * @src1: First source buffer
 * @src2: Second source buffer
 * @copy_len: Number of char to be copied from src2 to dest
 */
void copy_chars(char *dest, char *src1, char *src2, int copy_len)
{
	while (*src1 != '\0')
		*dest++ = *src1++;

	while (*src2 != '\0' && copy_len > 0)
	{
		*dest++ = *src2++;
		copy_len--;
	}
}
