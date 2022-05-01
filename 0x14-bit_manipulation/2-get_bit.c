#include "main.h"
#include <stdlib.h>

node *add_node(node **head, const int n);
/**
 * get_bit - gets the bit at an index
 * @n: the number to be checked
 * @index: the index to be fetched
 *
 * Return: the bit at the specified index;
 * otherwise, if it fails -1;
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}
