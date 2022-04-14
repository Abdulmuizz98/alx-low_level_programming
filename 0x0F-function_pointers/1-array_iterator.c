#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - function that executes a function
 * given as a parameter on each elements of an array.
 * @array: the array whose elements are to be used.
 * @size: the size of the array.
 * @action: pointer to the function that modifies the
 * elements of the array.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || size <= 0 || action == NULL)
		`return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
