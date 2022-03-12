#include <stdio.h>
/**
 * main - print all the numbers of base 16 in lowercase.
 * DESCRIPTION: use the putchar method to print all the
 * numbers of base 16 with one line afterwards.
 *
 * Return: 0
 */
int main(void)
{
	char first = 'a';
	char second = '0';

	while (second <= '9')
	{
		putchar(second);
		second++;
	}
	while (first <= 'z')
	{
		putchar(first);
		first++;
	}
	putchar('\n');
	return (0);
}
