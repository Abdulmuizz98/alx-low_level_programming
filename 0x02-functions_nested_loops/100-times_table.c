#include "main.h"
void print_number(int num);
/**
 * print_times_table - print the times table from 0 to n;
 * @n: the inclusive max of the table
 */
void print_times_table(int n)
{
	int i, j, num;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		_putchar('0');
		j = 1;
		while (j <= n)
		{
			_putchar(',');
			_putchar(' ');
			num = i * j;
			if ((num / 100) == 0)
				_putchar(' ');
			if ((num / 10) == 0)
				_putchar(' ');
			print_number(num);
			j++;
		}
		_putchar('\n');
	}
}
/**
 * print_number - prints positive integers with putchar
 * @num: the number to print
 */
void print_number(int num)
{
	int place = 1;
	int temp = num;

	while (temp / 10)
	{
		place *= 10;
		temp /= 10;
	}
	while (place != 1)
	{
		_putchar((num / place) + '0');
		num %= place;
		place /= 10;
	}
	_putchar((num % 10) + '0');
}
