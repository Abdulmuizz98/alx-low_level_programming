#include "main.h"
/**
 * *_memcpy - copies bytes from one memory area to another
 * @dest - the receiving memory area
 * @src - the copied memory area
 * @n - the number of bytes to be copied
 *
 * Return - dest after the copy
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
