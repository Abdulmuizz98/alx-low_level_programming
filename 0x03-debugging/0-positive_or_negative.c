#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints a random number and desides sign
 * DESCRIPTION: Prints a random number stating
 * whether it is negative, positive or zero.
 * Return: 0
 */
int positive_or_negative(int i)
{
		if (i > 0)
		{
			printf("%d is positive\n", i);
		}
		else if (i < 0)
		{
			printf("%d is negative\n", i);
		}
		else
		{
			printf("%d is zero\n", i);
		}
		return (0);
}
