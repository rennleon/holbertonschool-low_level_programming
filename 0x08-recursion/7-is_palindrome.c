#include "holberton.h"

int get_len(char *c);
int is_palindrome_rec(char *, char *);

/**
 * is_palindrome - Evaluates if a string is palindrome
 * @c: String to be evaluated
 */
int is_palindrome(char *c)
{
	int len;

	if (*c == '\0')
		return 0;

	len = get_len(c);

	return is_palindrome_rec(c, c + len - 1);
}

int get_len(char *c)
{
	if (*c == '\0')
		return 0;

	return 1 + get_len(c + 1);
}

/**
 * is_palindrome_rec - Evaluates if n is prime
 * @n: Num to be evaluated
 * @divisor: N
 */
int is_palindrome_rec(char *left, char *right)
{
	if (*left != *right)
		return 0;

	if (left < right)
		return is_palindrome_rec(left + 1, right - 1);
	
	return 1;
}
