#include <stdio.h>
/**
 * main - print all the possible different combos of a set of 2 digits..
 * DESCRIPTION: use the putchar method to print all the
 * possible different combinations of a set of 2 digits.
 *
 * Return: 0
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0, j = 0; i < 10; j++)
	{
		if (j == 10)
		{
			j = 0;
			i++;
			if (i == 10)
				continue;
		}

		for (k = i, l = j + 1; k < 10; l++)
		{
			if (l == 10)
			{
				l = 0;
				k++;
				if (k == 10)
					continue;
			}
			putchar(i + '0');
			putchar(j + '0');
			putchar(' ');
			putchar(k + '0');
			putchar(l + '0');
			if (!(i == 9 && j == 8 && k == 9 && l == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
