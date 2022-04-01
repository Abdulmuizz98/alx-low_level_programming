#include "main.h"
/**
 * *_memset - fills memory with a constant byte
 * @s - pointer to the base of the string
 * @b - constant byte string is to be filled with
 * @n - number of bytes to be filled
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while ( i < n )
	{
		s[i] = b;
		i++;
	}
	return (s);
}
