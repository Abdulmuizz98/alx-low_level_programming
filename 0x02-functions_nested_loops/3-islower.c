#include "main.h"
/**
 * _islower - checks if a character is in the lower case.
 * @c: The character to be checked.
 *
 * Description - helps determine whether a letter is in
 * upper case.
 * Return: int 1 if lower (else 0);
 */
int _islower(int c)
{
	int a = 97, z = 122;

	if (!(c < a || c > z))
		return (1);
	return (0);
}
