#include "main.h"

/**
 * print_diagonal - prints a diagonal line on the terminal.
 *
 * @n: the lenght of the diagonal line.
 *
 * Return: Nothing..
 */
void print_diagonal(int n)
{
	int space = 0;

	if (n < 1)
		_putchar('\n');

	while (n-- > 0)
	{
		int y = 0;

		while (y++ < space)
		{
			_putchar(' ');
		}
		space++;
		_putchar('\\');
		_putchar('\n');
	}
}
