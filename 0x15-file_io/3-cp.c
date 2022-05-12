#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
int copy(const char *file_from, const char *file_to);
/**
 * main - program that copies contents of a file to another
 * @ac: number of args.
 * @av: list of args.
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int res;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	res = copy(av[1], av[2]);
	if (res == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	else if (res == -2)
	{
		dprintf(2, "Error: Can't write to file %s\n", av[2]);
		exit(99);
	}
	else if (res == -3)
	{
		exit(100);
	}
	else
	{
	}
	return (0);
}

/**
 * copy -  does the copying
 * @file_from: file to copy from
 * @file_to: file to copy to
 *
 * Return: negaives for different fails,
 * 0 if successful
 */
int copy(const char *file_from, const char *file_to)
{
	int fd_write, fd_read;
	char *buf;
	int write_bytes, read_bytes, close_write, close_read;

	fd_write = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	fd_read = open(file_from, O_RDONLY);

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
		return (-2);
	while ((read_bytes = read(fd_read, buf, 1024)) != 0)
	{
		if (read_bytes == -1 || fd_read == -1)
			return (-1);
		write_bytes = write(fd_write, buf, read_bytes);
		if (write_bytes == -1 || fd_write == -1)
			return (-2);
	}

	free(buf);
	close_write = close(fd_write);
	close_read = close(fd_read);

	if (close_write == -1 || close_read == -1)
	{
		if (close_write == -1)
			dprintf(2, "Error: Can't close fd %d\n", fd_write);
		if (close_read == -1)
			dprintf(2, "Error: Can't close fd %d\n", fd_read);
		return (-3);
	}
	return (0);
}
