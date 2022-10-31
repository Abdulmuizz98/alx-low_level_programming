#include "main.h"

/**
 * _isdigit - checks for digit.
 *
 * @c: the char to check.
 *
 * Return: 1 if digit, otherwise 0.
 */
int _isdigit(int c)
{
	return ((c < 48 || c > 57) ? 0 : 1);
}
