#include "main.h"
/**
 * main - prints the alphabet in lowercase letters.
 *
 * Return: void
 */
void print_alphabet(void)
{
	char start = 'a';

	while(start <= 'z')
	{
		_putchar(start);
		start++;
	}
	_putchar('\n');
	return;
}
