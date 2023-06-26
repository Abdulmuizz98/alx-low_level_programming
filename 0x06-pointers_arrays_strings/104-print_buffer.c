#include <stdio.h>
#include <string.h>

/**
 * print_bytes - print bytes with a specified length
 * @c: the byte sequence to print
 * @len: length to print.
 *
 * Return: Nothing.
 */
void print_bytes(char *c, int len)
{
	int i = 0;

	for (; i < len; i++)
	{
		if (c[i] > 31 && c[i] < 127)
			putchar(c[i]);
		else
			putchar('.');
	}
}


/**
 * print_last_line - helper to print bytes in the last line
 * @j: staring index of the buffer for last line
 * @store: the buffer for last line bytes.
 *
 * Return: Nothing.
 */
void print_last_line(int j, char *store)
{
	int i = j;

	while (j % 10)
	{
		if (j % 2 == 0 && j != i + 1)
			printf(" ");
		printf("  ");
		j++;
	}
	print_bytes(store, (i % 10) + 1);
	printf("\n");
}


/**
 * print_buffer - prints a buffer like hexdump
 * @b: the buffer to print
 * @size: the size of bytes to print from the buffer
 *
 * Return: Nothing.
 */
void print_buffer(char *b, int size)
{
	char store[11];
	int i = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	while (i < size)
	{
		/* Ensures space after printing 2 bytes */
		if (i % 2 == 0 && i)
			printf(" ");

		if (i % 10 == 0)
		{
			/* Print line of 10 characters */
			if (i)
			{
				print_bytes(store, 10);
				printf("\n");
			}
			/* Print position of first byte of the line*/
			printf("%08x: ", i);
		}

		store[i % 10] = b[i];
		printf("%02x", b[i]);

		/* For last line add spaces for tabulation, then print */
		if (i + 1 == size && (i % 10) != 0)
			print_last_line(i, store);

		i++;
	}
}
