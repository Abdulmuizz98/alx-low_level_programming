#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print the sums of each diagonal of
 * an aray matrix.
 * @a: Casted 2D array into ordinary array;
 * @size: Size of the array
 *
 * Return: Nothing.
 */
void print_diagsums(int *a, int size)
{
	int i, sum, sum1;

	sum = sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		a -= size;
	}

	printf("%d, %d\n", sum, sum1);
}
