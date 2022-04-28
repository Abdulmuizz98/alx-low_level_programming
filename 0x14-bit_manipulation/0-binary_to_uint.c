#include "main.h"
#include <stdlib.h>
/**
 * binary_to_unint - converts binary to decimal
 * @b: the string containing the binary representation
 *
 * Return: if successful, the decimal equivalent;
 * otherwise, if b is NULL or if it contains non-binary
 * characters, 0;
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int exp = 1;
	int len = 0;

	if (b == NULL) 
		return (0);
	/* Track the length of te string b */
	while (b[len] != '\0')
	{
		if (b[len] != '1' && b[len] != '0')
			return (0);
		len++;
	}
	len--;
	/* convert each bit from the end of the string to their decimal */
       	while (len >= 0)
	{
		decimal += (b[len] - 48) * exp;
		exp = exp * 2;
		len--;
	}
	return (decimal);
}
