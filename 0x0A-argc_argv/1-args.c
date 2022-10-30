#include <stdio.h>

/**
 * main - a program that prints the number of argument passed to it;
 *
 * @argc: the count of arguments.
 * @argv: the array of arguments.
 *
 * Return: 0 if successful.
 */
int main(int argc, char *argv[])
{
	if (argv)
		printf("%d\n", --argc);
	return (0);
}
