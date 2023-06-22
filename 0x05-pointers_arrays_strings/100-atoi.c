#include <stdio.h>
#include <string.h>


/**
 * is_number - checks if a char is a number
 * @c: The char to be checked.
 *
 * Return: 1 if a number, otherwise 0.
 */
int is_number(char c)
{
	return ((c > 47 && c < 58) ? 1 : 0);
}


/**
 * _atoi - parses string into numbers.
 * @s: The string to be parsed.
 *
 * Return: The number repr by the string otherwise 0.
 */
int _atoi(char *s)
{
	int i, j = 0, place = 1, number = 0, minus_count = 0, multiplier;
	const int len = strlen(s);
	int list[len];

	/* Get all digits */
	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (!is_number(s[i]))
		{
			if (i > 0 && is_number(s[i - 1]))
				break;
			if (s[i] == '-')
				minus_count++;
		}
		else
		{
			list[j++] = s[i] - 48;
		}
	}

	/* Construct the number */
	for (--j ; j >= 0; j--)
	{
		number += list[j] * place;
		place *= 10;
	}

	/* Determine negative or positive */
	multiplier = (minus_count % 2) == 0 ? 1 : -1;

	return (number * multiplier);
}
