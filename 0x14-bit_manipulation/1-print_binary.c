#include "main.h"
#include <stdlib.h>
#include <stdio.h>
int modulo(unsigned long int num);
void print_bin(unsigned long int num);
/**
 * print_binary - print the binary representation of a number
 * @n: the integer to be converted to binary
 *
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		print_bin(n);
}
/**
 * print_bin - helper function to print non zero binaries.
 * @num: the non zero integer to be converted to binary
 *
 * Return: Nothing.
 */
void print_bin(unsigned long int num)
{
	unsigned long int rem;

	if (num == 0)
		return;
	rem = modulo(num);
	print_bin(num >> 1);
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
	return (num - ((num >> 1) << 1));
}
