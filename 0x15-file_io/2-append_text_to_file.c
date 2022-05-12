#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * append_text_to_file - appends text to an existing file
 * @filename: the name of the existing file
 * @text_content: the text to be appended
 *
 * Return: 1 if successful, otherwise -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, count = 0, write_bytes;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
		while (text_content[count])
			count++;
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	write_bytes = write(fd, text_content, count);
	if (write_bytes == -1)
		return (-1);
	close(fd);
	return (1);
}
