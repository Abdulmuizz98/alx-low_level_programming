#include "main.h"
/**
 * times_table - print the times table starting with 0
 */
void times_table(void)
{
	int i, j, num;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		j = 1;
		while (j < 10)
		{
			_putchar(',');
			_putchar(' ');
			num = i * j;
			if ((num / 10) == 0)
				_putchar(' ');
			else
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
			j++;
		}
		_putchar('\n');
	}
}
