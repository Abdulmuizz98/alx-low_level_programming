#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array.
 * @nmemb: the number of elements of the array.
 * @size: the size of bytes to be allocated per element.
 *
 * Return: If it fails, NULL;
 * otherwise, the pointer to the memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *temp;
	void *s;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	temp = s;
	for (i = 0; i < (nmemb * size); i++)
		temp[i] = 0;
	return (s);
}
