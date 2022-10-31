#include "main.h"

/**
 * print_triangle - prints a triange on the terminal.
 *
 * @n: the lenght of the triange.
 *
 * Return: Nothing..
 */
void print_triangle(int n)
{
	int space, tri, i = 1;

	if (n < 1)
		_putchar('\n');

	while (i <= n)
	{
		tri = i;
		space = n - tri;

		while (space--)
		{
			_putchar(' ');
		}
		while (tri--)
		{
			_putchar('#');
		}
		i++;
		_putchar('\n');
	}
}
