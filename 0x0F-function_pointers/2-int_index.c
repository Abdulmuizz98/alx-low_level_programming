#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 * @array: An array that is searched
 * @size: the size of the array
 * @cmp: the callback function that does the criteria
 * for the search.
 *
 * Return: if it finds an element, returns the index;
 * otherwise, -1;
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);
}
