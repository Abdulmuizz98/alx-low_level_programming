#include "main.h"
/**
 * print_sign - prints the sign of a number.
 * @n: The integer to be checked.
 *
 * Description - helps determine whether a number has a +, -
 * sign or is zero.
 * Return: 1(if +), 0(if 0) and -1(if -);
 */
int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (0);
}
