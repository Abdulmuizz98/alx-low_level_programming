#include <stdio.h>
/**
 * main - print the file you were compiled from
 *
 * Return: 0.
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
