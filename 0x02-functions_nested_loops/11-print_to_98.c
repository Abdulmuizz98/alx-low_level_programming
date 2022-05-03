#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print all numbers from n to 98
 * @n: the lower limit of the number
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	else
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	printf("98\n");
}
