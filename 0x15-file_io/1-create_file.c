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
	int write_bytes;
	
	if (filename == NULL)
		return (-1);
	
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	
	/*if (text_content != NULL)*/
		while (text_content[count])
			count++;
	
	write_bytes = write(fd, text_content, count);
	if (write_bytes == -1)
		return (-1);
	close(fd);
	return (1);
}
