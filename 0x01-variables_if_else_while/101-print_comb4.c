#include <stdio.h>
/**
 * main - print all the possible different comos of 3 digits..
 * DESCRIPTION: use the putchar method to print all the
 * possible different combinations of 3 digits.
 *
 * Return: 0
 */
int main(void)
{
	int i, j, k;

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			for (k = j + 1; k <= 57; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (k == 57 && j == 56 && i == 55)
				{
					break;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
