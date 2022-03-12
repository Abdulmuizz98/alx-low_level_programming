#include <stdio.h>
/**
 * main - print all the possible different comos of 2 digits..
 * DESCRIPTION: use the putchar method to print all the
 * possible different combinations of 2 digits.
 *
 * Return: 0
 */
int main(void)
{
	int first = 48;
	int start = 49;

	while (first <= 57)
	{
		putchar(first);
		putchar(start);
		if (first == 56 && start == 57)
		{
			break;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}

		/* Updating start. Check if we got to 9 */
		if (start == 57)
		{
			first++;
			start = first + 1;
		}
		else
		{
			start++;
		}
	}
	putchar('\n');
	return (0);
}
