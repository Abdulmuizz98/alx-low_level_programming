#include "main.h"

/**
 * print_square - prints a square on the terminal.
 *
 * @n: the lenght of the square.
 *
 * Return: Nothing..
 */
void print_square(int n)
{
	int squ = n;

	if (n == 0)
		_putchar('\n');

	while (n-- > 0)
	{
		int i = squ;

		while (i--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
