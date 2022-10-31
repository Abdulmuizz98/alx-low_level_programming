#include "main.h"
#include <stdlib.h>

/**
 * print_number - prints an integer.
 *
 * @n: the number to print.
 *
 * Return: Nothing..
 */
void print_number(int n)
{
	int dup = abs(n);
	int div = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (dup / 10 != 0)
	{
		div *= 10;
		dup /= 10;
	}

	if (n < 0)
	{
		_putchar('-');
		n = abs(n);
	}

	while (n != 0)
	{
		_putchar((n / div) + 48);
		n %= div;
		div /= 10;
	}
}
