#include <stdio.h>
/**
 * main - print all the letters of the english alphabet.
 * DESCRIPTION: use the putchar method to print all the
 * letters of the english alphabet with one line afterwards.
 *
 * Return: 0
 */
int main(void)
{
	char first = 'a';
	while (first <= 'z')
	{
		putchar(first);
		first++;
	}
	putchar('\n');
	return (0);
}
