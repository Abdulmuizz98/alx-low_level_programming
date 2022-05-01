#include "main.h"
#include <stdlib.h>

/**
 * flip_bits - number of bits to be fliped to get other number
 * @n: the first number
 * @m: the second number
 *
 * Return: 1 if it succeeds;
 * otherwise, if it fails -1;
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res;
	unsigned int count = 0;

	res = n ^ m;
	while (res != 0)
	{
		if ((res & 1) != 0)
			count++;	
		res >>= 1;
	}
	return (count);
}
