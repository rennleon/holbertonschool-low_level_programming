#include "holberton.h"
/**
 * _islower - Checks if a char is lowercase
 * @ascii_code: ascii code of char to be evalated
 *
 * Return: 1 if the char is lowercase, 0 otherwise
 */
int _islower(int ascii_code)
{
	if (ascii_code >= 97 && ascii_code <= 122)
		return (1);

	return (0);
}
