#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - function that allocates memory using malloc.
 * @b: the size of memory to be allocated.
 *
 * Return: a void pointer to the memory.
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
		exit(98);
	return (s);
}
