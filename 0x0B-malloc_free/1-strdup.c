#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - returns a pointer to a duplicate
 * of a string.
 * @str: the string to be duplicated.
 *
 * Return: If str is NULL, or if it fails - NULL;
 * otherwise - the pointer to the duplicate.
 */
char *_strdup(char *str)
{
	int i = 0, len = 0;
	char *s;

	if (str == NULL)
		return (NULL);
	while (str[len])
	{
		len++;
	}

	s = malloc(sizeof(char) * (len + 1));

	if (s != NULL)
	{
		while (str[i] != 0)
		{
			s[i] = str[i];
			i++;
		}
		s[i] = '\0';
	}
	return (s);
}
