#include <stdio.h>
#include "main.h"


/**
 * *leet - Encodes a string to 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	char *leet = "aeotl";
	char *leet_replacement = "43071";
	int i;
	char *p = str;

	while (*str)
	{
		for (i = 0; i < 5; i++)
		{
			if (*str == leet[i] || *str == leet[i] - 32)
			{
				*str = leet_replacement[i];
			}
		}
		str++;
	}

	return (p);
}
