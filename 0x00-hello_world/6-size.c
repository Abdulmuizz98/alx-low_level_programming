#include <stdio.h>
/**
 * main - Entry point
 * Prints the assigned memory space for different data tyoes
 * Return: return 0 after program execution
 *
 */
int main(void)
{
	char c;
	int i;
	long int a;
	long long int b;
	float d;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(d));
	return (0);
}
