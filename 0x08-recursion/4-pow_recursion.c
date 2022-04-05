#include "main.h"
/**
 * _pow_recursion - raises a number to a power.
 * @x: the number to be raised to a power.
 * @y: the power the number x is to be raised to.
 *
 * Return: if y is less than 0, -1,
 * if y is 0, 1;
 * otherwise y raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
