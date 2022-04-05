#include "main.h"
int check_prime_twice(int n, int i);

/**
 * _sqrt_recursion - get square root of a number recursively
 * @n: number whose square root is to be found.
 *
 * Return: if n is 0, 0;
 * if n is 1, 1;
 * otherwise, the square root of the number recursively.
 */
int _sqrt_recursion(int n)
{
	int num;

	if (n == 0)
		return (0);
	if (n == 1)
		return (1);

	num = check_prime_twice(n, 2);

	if (num == 0)
		return (-1);

	return (num * _sqrt_recursion(n / (num * num)));
}

/**
 * check_prime_twice - checks for a number that can divide n
 * twice without remainder.
 * @n: the number to be divided.
 * @i: number to be divided by.
 *
 * Return: if found, the number that can divide it.
 * else, 0;
 */
int check_prime_twice(int n, int i)
{
	if (n <= i)
		return (0);

	if (!(n % (i * i)))
		return (i);

	return (check_prime_twice(n, (i + 1)));
}
