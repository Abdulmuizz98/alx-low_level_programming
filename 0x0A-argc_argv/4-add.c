#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * is_int - checks if a string token is an integer.
 *
 * @str: the string to be checked.
 *
 * Return: 0 if not a string, else 1.
 */
int is_int(char *str)
{
	while (*str != '\0')
	{
		if (*str < 48 || *str > 57)
			return (0);
		str++;
	}
	return (1);
}

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
		int sum = 0;

		while (--argc)
		{
			argv++;
			if (!is_int(*argv))
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(*argv);
		}
		printf("%d\n", sum);
	}
	return (0);
}

