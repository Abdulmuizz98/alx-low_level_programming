#include "main.h"
/**
 * factorial - returns the factorial of a number
 * recursively.
 * @n: number to find its factorial.
 *
 * Return: factorial of a number recursively.
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
