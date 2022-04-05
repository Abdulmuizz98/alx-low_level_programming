#include "main.h"
int check_prime(int n, int i);

/**
 * is_prime_number - checks if a number is a prime number
 * recursively.
 * @n: number to be checked
 *
 * Return: if n is 0 or 1 or not a prime number, 0;
 * otherwise, 1.
 */
int is_prime_number(int n)
{
	if (n < 0)
		n *= -1;

	if (n == 0 || n == 1)
		return (0);

	return (check_prime(n, 2));
}

/**
 * check_prime - checks if a number is prime.
 * @n: the number to be checked
 * @i: number to be divided by.
 *
 * Return: if prime, 1;
 * else, 0;
 */
int check_prime(int n, int i)
{
	if (i == n)
		return (1);

	if (!(n % i))
		return (0);
	else
		return (1 * (check_prime(n, (i + 1))));
}
