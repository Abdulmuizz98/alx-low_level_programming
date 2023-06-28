#include "main.h"

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
