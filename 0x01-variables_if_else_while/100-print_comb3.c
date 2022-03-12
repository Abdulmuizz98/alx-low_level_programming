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
	char first = '0';
	char start = '1';

	while (first <= '9')
	{
		putchar(first);
		putchar(start);
		if (first != '8' && start != '9')
		{
			putchar(',');
			putchar(' ');
		}
		start++;
		if (start == '9')
		{
			first++;
			start = first + 1;
		}
	}
	putchar('\n');
	return (0);
}
