#include <stdio.h>

void print_buffer(char *, int);

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char buffer[] = "Talk\nis\t\tcheap.\x20 \1Sho\2w\3 me\4 \5the\6 code.";

	printf("%s\n", buffer);
	printf("---------------------------------\n");
	print_buffer(buffer, sizeof(buffer));
	return (0);
}
