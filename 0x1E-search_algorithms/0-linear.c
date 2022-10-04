#include "search_algos.h"

/**
 * linear_search -  searches for a value in an array of integers
 * @array: the array to be searched
 * @size: the length of the array to be searched
 * @value: the value to be searched for in the array
 *
 * Return: if array is NULL or value not found, -1;
 * Otherwise, the index value was found.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}

