#include "main.h"
/**
 * jack_bauer - print the 24 hours
 */
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0, j = 0; !(i == 2 && j == 4); j++)
	{
		if (j == 10)
		{
			j = 0;
			i++;
		}
		for (k = 0, l = 0; k < 6; l++)
		{
			if (l == 10)
			{
				l = 0;
				k++;
				if (k == 6)
					break;
			}
			_putchar(i + '0');
			_putchar(j + '0');
			_putchar(':');
			_putchar(k + '0');
			_putchar(l + '0');
			_putchar('\n');
		}
	}
}
