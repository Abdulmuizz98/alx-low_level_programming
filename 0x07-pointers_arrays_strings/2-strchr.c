#include "main.h"
/**
 * *_strchr - returns memory of the first occurence
 * 		of a byte
 * @s - string to be traversed
 * @c - character to be found
 *
 * Return: Memory of first occurence if found, else NULL.
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			return s + i;
		i++;
	}
	
	return (0);
}
