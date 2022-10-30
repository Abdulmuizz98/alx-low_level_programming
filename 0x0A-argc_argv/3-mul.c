#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers;
 *
 * @argc: the count of arguments.
 * @argv: the array of arguments.
 *
 * Return: 0 if successful.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		printf("Error\n");
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
