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
	int i, count = 0, place = 1, number = 0, minus_count = 0, multiplier;

	/* Use number of consecutive digits to determine highest plave value*/
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
			count++;
		}
	}

	/* Get highest place value multiplier*/
	for (i = count - 1; i > 0; i--)
		place *= 10;

	/* Determine negative or positive */
	multiplier = (minus_count % 2) == 0 ? 1 : -1;

	/* Get all digits and determine negative numbers */
	for (i = 0; count > 0; i++)
	{
		if (is_number(s[i]))
		{
			number += (s[i] - 48) * place * multiplier;
			place /= 10;
			count--;
		}
	}

	return (number);
}
