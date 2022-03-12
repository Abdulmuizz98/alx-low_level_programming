#include <stdio.h>
/**
 * main - print all the letters of the english alphabet backwards
 * DESCRIPTION: use the putchar method to print all the
 * letters of the english alphabets backwards.
 *
 * Return: 0
 */
int main(void)
{
	char first = 'z';

	while (first >= 'a')
	{
		putchar(first);
		first--;
	}
	putchar('\n');
	return (0);
}
