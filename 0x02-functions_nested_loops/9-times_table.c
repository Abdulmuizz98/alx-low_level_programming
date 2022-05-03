#include "main.h"
/**
 * times_table - print the times table starting with 0
 */
void times_table(void)
{
	int i, j, num;

	for (i = 0; i < 10; i++)
	{
		j = 0;
		while (j < 10)
		{
			num = i * j;
			if ((num / 10) == 0)
				_putchar(' ');
			else
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
	}
}
