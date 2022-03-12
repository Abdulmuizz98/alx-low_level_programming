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
	int i,j,k;

	for (i = 48; i <= 57; i)
	{
		for (j = 49; j <= 57;)
		{
			for (k = 50; k <=57;)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if( k == 57 && j == 56 && i == 55)
				{
					break;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
				/*Increment Second from third */
				if (k == 57)
				{
					j++;
					k = j + 1;
				}
				else
				{
					k++;
				}
				/*Increment First from Second*/
				if (j == 57)
				{
					i++;
					j = i + 1;
				}
				else
				{
					j++;
				}

			}
		}
	}
	putchar('\n');
	return (0);
}
