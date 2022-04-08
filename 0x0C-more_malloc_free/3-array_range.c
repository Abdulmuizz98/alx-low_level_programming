#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers.
 * @min: inclusive min of element in the created array.
 * @max: inclusive max of element in the created array.
 *
 * Return: If it fails, NULL;
 * otherwise, the pointer to the memory.
 */
int *array_range(int min, int max)
{
	int size = max - min + 1;
	int *s;
	int i;

	if (min > max)
		return (NULL);
	s = malloc(size * sizeof(int));
	if (s == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		s[i] = min++;
	return (s);
}
