#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * read_textfile - reads a text file and prints to stdout
 * @filename: the name of the textfile.
 * @letters: the number of chars to be printed from the file
 *
 * Return: 0 if filename is NULL, file cannot be opened or
 * read, write fails or doesnt write the expected amount of
 * bytes;
 * otherwise return the actual number of letters it could
 * read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	int read_bytes;

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1 || filename == NULL)
		return (0);
	read_bytes = read(fd, buf, letters);
	write(STDOUT_FILENO, buf, letters);
	free(buf);
	close(fd);

	return ((read_bytes < 0) ? 0 : read_bytes);
}
