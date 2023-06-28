#include "main.h"

/**
 * * _strcmp - Compares pointers to two strings.
 * @s1: A pointer to the first string to be compared.
 * @s2: A pointer to the second string to be compared.
 *
 * Return: If str1 < str2, the negative difference of
 * the first unmatched characters.
 * If s1 == s2, 0.
 * If s1 > s2, the positive difference of
 * the first unmatched characters.
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}

/**
 * *_strstr - Locate a substring..
 * @haystack: string checked for matching substring.
 * @needle: substring that is found.
 *
 * Return: A pointer to the beginning of the located
 * substrings, otherwise NULL (if not found)
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	
	if (!_strcmp(needle, ""))
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);

				i++;

			} while (haystack[i] == needle[i]);
		}

		haystack++;
	}
	return (0);
}
