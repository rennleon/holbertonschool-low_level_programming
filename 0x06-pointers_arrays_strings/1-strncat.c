#include "holberton.h"

/**
 * _strncat - Appends n chars from src to dest and returns a pointer to dest
 * @dest: String to be extended
 * @src: String to be appended to dest
 * @n: Num of char to be taken from src
 *
 * Return: Pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int offset = 0;
	int count = 0;
	char *start = dest;

	while (*(start + offset) != '\0')
		offset++;

	while (*(src) != '\0' && count < n)
	{
		*(start + offset) = *(src);
		offset++, src++, count++;
	}

	*(start + offset) = '\0';

	return (dest);
}
