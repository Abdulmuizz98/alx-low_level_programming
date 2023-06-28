#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: string checked for number of bytes
 * @accept: string with chars that are accepted
 *
 * Return: Number of bytes in initial segment of s
 * which consists only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int j;
	unsigned int byt = 0;

	while (*s != ' ')
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				byt++;
				break;
			}
		}
		s++;
	}
	return (byt);
}
