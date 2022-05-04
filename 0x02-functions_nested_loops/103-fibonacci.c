#include "main.h"
#include <stdio.h>
unsigned long int fibonacci(int place);
/**
 * main - prints the sum of multiples of 3 and 5 before 1024
 *
 * Return: Nothing.
 */
int main(void)
{
	int num = 1;
	unsigned long int sum;

	while (fibonacci(num) <= 4000000)
	{
		if ((fibonacci(num) % 2) == 0)
		      sum += fibonacci(num);	
		num++;
	}
	printf("%lu\n", sum);
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
