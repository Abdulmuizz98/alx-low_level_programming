#include "main.h"
/**
 * _strchr - returns pointer to the first occurence
 * of a byte in a string
 * @s: string to be traversed
 * @c: character to be found
 *
 * Return: Memory of first occurence if found;
 * otherwise,  NULL.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) >= '\0')
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}

	return (0);
}
