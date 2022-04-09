#include "main.h"
/**
 * _isalpha - checks if a character is in the alphabet.
 * @c: The character to be checked.
 *
 * Description - helps determine whether a character is
 * an alphabet..
 * Return: int 1 if lower (else 0);
 */
int _isalpha(int c)
{
	int a = 97, z = 122;

	if (!(c < a || c > z) || !(c < 65 || c > 90))
		return (1);
	return (0);
}
