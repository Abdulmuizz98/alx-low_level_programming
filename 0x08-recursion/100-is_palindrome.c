#include "main.h"

int _strlen_recursion(char *s);

/**
 * _palindrome - worker for recursive is_palindrome function
 * @s: string to be checked
 * @i: start index of next segment to be checked
 * @j: end index of next segment to be checked
 *
 * Return: if s ia a palindrome, 1;
 * otherwise, 0.
 */
int _palindrome(char *s, int i, int j)
{
	if (i >= j)
		return (1);
	if (s[i] != s[j])
		return (0);
	return (_palindrome(s, i + 1, j - 1));
}

/**
 * is_palindrome - checks if a number is a palindrome
 * recursively.
 * @s: string to be checked
 *
 * Return: if s is a palindrome, 1;
 * otherwise, 0.
 */
int is_palindrome(char *s)
{
	int n = _strlen_recursion(s);

	return (_palindrome(s, 0, n - 1));
}

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string whose length is computed.
 *
 * Return: the length of a string recursively.
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
