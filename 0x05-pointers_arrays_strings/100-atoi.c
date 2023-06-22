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
	int i, place = 0, number = 0, minus_count = 0, multiplier;

	/* Use number of consecutive digits to determine highest plave value*/
	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (!is_number(s[i]))
		{
			if (i > 0 && is_number(s[i - 1]))
				break;
		}
		else
		{
			place++;
		}
	}

	i = --place;
	place = 1;
	
	while(i)
	{
		place *= 10;
		i--;
	}

	/* Get all digits and determine negative numbers */
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
			number += (s[i] - 48) * place;
			place /= 10;
		}
	}

	/* Determine negative or positive */
	multiplier = (minus_count % 2) == 0 ? 1 : -1;

	return (number * multiplier);
}
