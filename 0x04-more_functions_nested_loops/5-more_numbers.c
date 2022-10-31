#include "main.h"

/**
 * more_numbers - print the numbers from 0 to 14.
 *
 * Return: Nothing..
 */
void more_numbers(void)
{
	int a = 14;

	while (a--)
	{
		int n = 0;

		while (n < 15)
		{
			if (n > 9)
				_putchar(1 + 48);

			_putchar((n % 10) + 48);
			n++;
		}
		_putchar('\n');
	}
}
