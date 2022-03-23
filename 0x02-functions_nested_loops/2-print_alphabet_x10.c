#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet in lowercase letters repeated 10 times.
 * Description - helps print all letters in lower case
 * from a to z repeated 10 times.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int times = 10;
	char start = 'a';

	while (times > 0)
	{
		while (start <= 'z')
		{
			_putchar(start);
			start++;
		}
		_putchar('\n');
		times--;
	}
}
