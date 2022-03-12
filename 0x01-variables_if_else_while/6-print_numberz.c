#include <stdio.h>
/**
 * main - print all the single digit numbers of base 10..
 * DESCRIPTION: use the putchar method to print all the
 * single digit numbers of base 10..
 *
 * Return: 0
 */
int main(void)
{
	int first = 48;

	while (first <= 57)
	{
		putchar(first);
		first++;
	}
	putchar('\n');
	return (0);
}
