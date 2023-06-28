#include "main.h"

/**
 * *_strpbrk - Searches a string for any of a set of bytes.
 * @s: string checked for matching bytes
 * @accept: string with chars that are accepted
 *
 * Return: A pointer to the byte in s that matches one of the
 * bytes in accept, otherwise NULL (if not found)
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
