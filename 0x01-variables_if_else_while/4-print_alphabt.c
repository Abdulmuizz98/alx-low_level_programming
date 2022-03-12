#include <stdio.h>
/**
 * main - print all the letters of the english alphabet except e and q.
 * DESCRIPTION: use the putchar method to print all the
 * letters of the english alphabets except e and q with one line afterwards.
 *
 * Return: 0
 */
int main(void)
{
	char first = 'a';

	while (first <= 'z')
	{
		if (first == 'e' || first == 'q')
		{
			continue;
		}
		else
		{

			putchar(first);
		}
		first++;
	}
	putchar('\n');
	return (0);
}
