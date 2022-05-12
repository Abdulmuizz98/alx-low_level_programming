#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * create_file - creates a file and adds initial text
 * @filename: the name of the file to create
 * @text_content: the initial text to be added.
 *
 * Return: -1 on failure, 1 on success
 * -1 if filename is null.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int count = 0;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1 || filename == NULL)
	{
		exit(1);
		return (-1);
	}

	while (text_content[count])
		count++;
	if (count != 0)
		write(fd, text_content, count);
	close(fd);
	return (1);
}
