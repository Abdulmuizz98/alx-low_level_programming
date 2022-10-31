#include "main.h"

/**
 * _isupper - checks for uppercase character.
 *
 * @c: the letter to check.
 *
 * Return: 1 if uppercase, otherwise 0.
 */
int _isupper(int c)
{
	return ((c < 65 || c > 90) ? 0 : 1);
}
