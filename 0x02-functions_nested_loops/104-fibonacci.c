#include "main.h"
#include <stdio.h>
void print_number(unsigned long int num);
unsigned long int fibonacci(int place);
/**
 * main - prints the fib terms to 98
 *
 * Return: Nothing.
 */
int main(void)
{
	int i = 0;

	while (i < 98)
	{
		print_number(fibonacci(1));
		printf(", ");

		i++;
	}
	/*print_number(fibonacci(98));
	printf("\n");
	print_number(fibonacci(50));
	printf("\n");*/
	return (0);
}
/**
 * fibonacci - print the place of fibonacci
 * @place: the postion of fib
 *
 * Return: the fibonacci value
 */
unsigned long int fibonacci(int place)
{
	int i = 3;
	unsigned long int num1 = 1;
	unsigned long int num2 = 2;
	unsigned long int sum;

	if (place == 1)
		return (num1);
	if (place == 2)
		return (num2);

	while (i <= place)
	{
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
		i++;
	}
	return (sum);
}
/**
 * print_number - prints positive integers with putchar
 * @num: the number to print
 */
void print_number(unsigned long int num)
{
	unsigned long int place = 1;
	unsigned long int temp = num;

	while (temp / 10)
	{
		place *= 10;
		temp /= 10;
	}
	while (place != 1)
	{
		_putchar((num / place) + '0');
		num %= place;
		place /= 10;
	}
	_putchar((num % 10) + '0');
}
