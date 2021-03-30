#include "holberton.h"
#include <stdio.h>

/**
 * read_textfile - Reads a text file and prints it to the standard output
 * @filename: Path of the file
 * @letters: Number of letters the funtion should read and print
 *
 * Return: The amount of letters it should read and write, 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	size_t chars_read;

	if (filename == NULL || letters == 0)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(*buff) * letters);
	if (buff == NULL)
		return (0);

	chars_read = read(fd, buff, letters);
	write(STDOUT_FILENO, buff, chars_read);
	close(fd);

	free(buff);

	return (chars_read);
}
