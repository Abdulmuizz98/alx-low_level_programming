#include <stdio.h>
#include <stdlib.h>


/**
 * main - a program that prints the minimum number of coins for change;
 *
 * @argc: the count of arguments.
 * @argv: the array of arguments.
 *
 * Return: 0 if successful, otherwise 1.
 */
int main(int argc, char *argv[])
{
	int i = 0, count = 0, amt;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amt = atoi(argv[1]);

	if (amt < 0)
	{
		printf("0\n");
		return (1);
	}
	while (amt)
	{
		while (amt >= *(coins + i))
		{
			amt -= *(coins + i);
			count++;
		}
		i++;
	}
	printf("%d\n", count);

	return (0);
}

