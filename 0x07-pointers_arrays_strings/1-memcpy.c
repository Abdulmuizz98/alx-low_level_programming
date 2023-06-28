#include "main.h"
/**
 * _memcpy - copies bytes from one memory buffer to another
 * @dest: the receiving memory buffer
 * @src: the copied memory buffer
 * @n: the number of bytes to be copied
 *
 * Return: destination buffer copied to
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
