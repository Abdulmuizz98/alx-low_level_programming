#include "search_algos.h"



/**
 * print_array -  prints the values in arr btw start and end
 * @arr: the array to print values from
 * @start: index to start print from
 * @end: index to end print
 *
 * Return: Nothing.
 */
void print_array(int *arr, int start, int end)
{
	while (start < end)
		printf("%d, ", arr[start++]);
	printf("%d\n", arr[end]);
}


/**
 * binary_search -  searches for a value in an array of integers
 * @array: the array to be searched
 * @size: the length of the array to be searched
 * @value: the value to be searched for in the array
 *
 * Return: if array is NULL or value not found, -1;
 * Otherwise, the index value was found.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start = 0, end = size - 1, mid;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		printf("Searching in array: ");
		print_array(array, start, end);
		mid = (start + end) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			end = mid - 1;
		else
			start = mid + 1;
	}
	return (-1);
}

