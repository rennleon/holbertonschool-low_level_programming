#include "holberton.h"

int len(char *);

/**
 * create_file - Creates a file
 * @filename: Name of the file
 * @text_content: Content to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	/* las param(mode) should be written in octal notation */
	/* rw- --- --- */
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
	{

		return (-1);
	}

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	write(fd, text_content, len(text_content));
	close(fd);

	return (1);
}

/**
 * len - Calculates the length of a string
 * @str: String param
 *
 * Return: Length of str
*/
int len(char *str)
{
	int length = 0;

	while (str[length] != '\0')
		length++;

	return (length);
}
