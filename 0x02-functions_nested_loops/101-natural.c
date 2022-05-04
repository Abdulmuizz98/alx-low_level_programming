#include "main.h"
#include <stdio.h>
unsigned int print_multiples_3_5(int num);
/**
 * main - prints the sum of multiples of 3 and 5 before 1024
 *
 * Return: Nothing.
 */
int main(void)
{
	int num;

	num = print_multiples_3_5(1024);
	printf("%u\n", num);

	return (0);
}
/**
 * print_multiples_3_5 - print the sum of multiples
 * @num: the number to print its multiples
 *
 * Return: the last digit
 */
unsigned int print_multiples_3_5(int num)
{
	int i = 0;
	int sum = 0;

	while (i < num)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
		i++;
	}
	return (sum);
}
