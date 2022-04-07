#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - concatenate two strings
 * @s1: the first string.
 * @s2: the second string.
 * @n: the number of the characters of the second
 * string concatenated.
 *
 * Return: If it fails, NULL;
 * otherwise, the pointer to the result of the concatenation.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, len = 0;
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
	len += n;
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
		while (s2[i] != 0 && n)
		{
			s[len] = s2[i];
			i++;
			len++;
			n--;
		}
		s[len] = '\0';
	}
	return (s);
}
