#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - a program that adds positive numbers;
 *
 * @argc: the count of arguments.
 * @argv: the array of arguments.
 *
 * Return: 0 if successful.
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("0\n");
	else
	{
		int sum = 0, temp;

		while (--argc)
		{
			argv++;
			temp = atoi(*argv);
			if (temp == 0 && strcmp(*argv, "0"))
			{
				printf("Error\n");
				return (1);
			}
			sum += temp;
		}
		printf("%d\n", sum);
	}
	return (0);
}
