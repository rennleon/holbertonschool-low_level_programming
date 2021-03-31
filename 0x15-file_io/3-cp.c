#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int len(char *);
void close_fd(int fd);

/**
 * main - Copies a file to antoher one
 * @ac: Arg counter
 * @av: Arg list
 *
 * Return: 0 on success, otherwise exits with code error
 */
int main(int ac, char **av)
{
	int fd_from, fd_to;
	char *file_from, *file_to;
	char buff[1024];
	int buff_size = 1024;
	unsigned int curr_read = 0;

	if (ac != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 29);
		exit(97);
	}

	file_from = strdup(av[1]);
	file_to = strdup(av[2]);

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	fd_to = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	do {
		curr_read = read(fd_from, buff, buff_size - 1);
		buff[curr_read] = '\0';
		dprintf(fd_to, "%s", buff);
	} while (curr_read != 0);

	close_fd(fd_from);
	close_fd(fd_to);

	return (0);
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

/**
 * close_fd - Closes a file descriptor
 * @fd: Fiedl descriptor
 */
void close_fd(int fd)
{
	int close_stat = close(fd);

	if (close_stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
