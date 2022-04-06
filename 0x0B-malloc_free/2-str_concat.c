#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat - function that concatenates
 * two strings.
 * @s1: first string to be concatenated.
 * @s2: second string to be concatenated..
 *
 * Return: If it fails - NULL;
 * otherwise - the pointer to the concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, len = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
	{
		len++;
		i++;
	}
	i = 0;

	while (s2[i])
	{
		len++;
		i++;
	}
	i = 0;

	s = malloc(sizeof(char) * (len + 1));

	if (s != NULL)
	{
		while (s1[i] != 0)
		{
			s[i] = s1[i];
			i++;
		}
		len = i;
		i = 0;

		while (s2[i] != 0)
		{
			s[len] = s2[i];
			i++;
			len++;
		}
		s[len] = '\0';
	}
	return (s);
}
