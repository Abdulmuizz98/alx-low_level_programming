#include "main.h"

/**
 * print_line - prints a straight line on the terminal.
 *
 * @n: the number of times to print char '_'.
 *
 * Return: Nothing..
 */
void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
