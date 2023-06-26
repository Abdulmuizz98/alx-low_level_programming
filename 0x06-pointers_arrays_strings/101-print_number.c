#include "main.h"

/**
 * get_place - get the highest place value of a number.
 * @n: The number to get its place value.
 *
 * Return: The place value.
 */
int get_place(int n)
{
	int place = 1;

	while (n > 9)
	{
		place *= 10;
		n /= 10;
}

	return (place);
}


/**
 * print_number - prints a number
 * @n: The number to print.
 *
 * Return: Nothing.
 */
void print_number(int n)
{
	int place, temp = n;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	place = get_place(n);

	while (n != 0)
	{
		if (n / place > 0)
			_putchar((n / place) + 48);
		else
			_putchar((n / place * -1) + 48);
		n %= place;
		place /= 10;
	}

	if (temp % 10 == 0)
		_putchar(0 + 48);

}
