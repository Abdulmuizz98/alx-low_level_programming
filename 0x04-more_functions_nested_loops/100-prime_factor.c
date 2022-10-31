#include <stdio.h>

/**
 * main - finds the prime factor of 1231952.
 *
 * Return: 1 if success, 0 if fail..
 */
int main(void)
{
	long int i = 612852475143;
	long int fac = 2, pfac;

	while (i != 1)
	{
		while ((i % fac) == 0)
		{
			pfac = fac;
			i /= fac;
		}
		fac++;
	}
	printf("%ld\n", pfac);
	return (0);
}
