#include <stdio.h>
/**
 * main - print all the letters of the english alphabet.
 * DESCRIPTION: use the putchar method to print all the
 * letters of the english alphabets (small caps then uppercase)
 * with one line afterwards.
 *
 * Return: 0
 */
int main(void)
{
	char first = 'a';
	char second = 'A';

	while (first <= 'z')
	{
		putchar(first);
		first++;
	}
	while (second <= 'Z')
	{
		putchar(second);
		second++;
	}
	putchar('\n');
	return (0);
}
