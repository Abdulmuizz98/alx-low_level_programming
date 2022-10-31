#include <stdio.h>

/**
 * main - prints the numbers from 1 - 100 with fizz buzz.
 *
 * Return: 1 if success, 0 if fail..
 */
int main(void)
{
	int i = 0;

	while (++i < 101)
	{
		if (!(i % 3) && !(i % 5))
			printf("FizzBuzz");
		else if (!(i % 3))
			printf("Fizz");
		else if (!(i % 5))
			printf("Buzz");
		else
			printf("%d", i);

		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
