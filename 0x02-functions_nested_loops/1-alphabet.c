#include "main.h"
/**
 * main - prints the alphabet in lowercase letters.
 * Description - helps print all letters in lower case
 * from a to z.
 *
 * Return: void
 */
void print_alphabet(void)
{
	char start = 'a';

	while (start <= 'z')
	{
		_putchar(start);
		start++;
	}
	_putchar('\n');
}
