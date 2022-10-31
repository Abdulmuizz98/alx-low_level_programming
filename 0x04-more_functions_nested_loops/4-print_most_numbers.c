#include "main.h"

/**
 * print_most_numbers - print the numbers from 0 to 9 save 2 and 4.
 *
 * Return: Nothing..
 */
void print_most_numbers(void)
{
	int n = 48;

	while (n < 58)
	{
		if (n != '2' && n != '4')
			_putchar(n);
		n++;
	}
	_putchar('\n');
}
