#include "main.h"
#include <stdlib.h>
#include <stdio.h>
int modulo(unsigned long int num);
/**
 * print_binary - print the binary representation of a number
 * @n: the integer to be converted to binary
 *
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	unsigned long int rem;

	if (n > 1)
		print_binary(n >> 1);

	rem = modulo(n);
	_putchar(rem + '0');
}
/**
 * modulo - gets the modulo 2 of a number with bitwise
 * @num:  the number to evaluate its modulo 2
 *
 * Return: the result of the modulo operation. 1 0r 0;
 */
int modulo(unsigned long int num)
{
	return (num & 1);
}
