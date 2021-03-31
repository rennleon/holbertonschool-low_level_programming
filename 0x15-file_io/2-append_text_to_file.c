#include "holberton.h"

int len(char *);

/**
 * append_text_to_file - Appends text to the end of file
 * @filename: Name of the file
 * @text_content: Content to append to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

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
