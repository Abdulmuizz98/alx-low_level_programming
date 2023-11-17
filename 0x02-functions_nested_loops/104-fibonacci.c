#include "main.h"
#include <stdio.h>
/**
 * main - prints the fib terms to 98
 *
 * Return: Nothing.
 */
int main(void)
{
	double n1 = 1;
	double n2 = 2;
	double sum;
	int i = 3;

	printf("1, 2,");

	while (i < 98)
	{
		sum = n1 + n2;
		n1 = n2;
		n2 = sum;
		printf(" %0.f,", sum);

		i++;
	}
	printf(" %0.f\n", n1 + n2);
	return (0);
}
