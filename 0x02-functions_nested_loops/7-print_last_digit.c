#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @num: the number to print its last digit
 *
 * Return: the last digit
 */
int print_last_digit(int num)
{
	num = num % 10;
	num = num < 0 ? -num : num;
	_putchar('0' + num);
	return (num);
}
