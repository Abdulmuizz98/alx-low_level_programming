#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - sets the bit at an index to 0
 * @n: the number to be checked
 * @index: the index to be fetched
 *
 * Return: 1 if it succeeds;
 * otherwise, if it fails -1;
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if ((*n & (1 << index)) != 0)
		*n ^= (1 << index);
	return (1);
}
