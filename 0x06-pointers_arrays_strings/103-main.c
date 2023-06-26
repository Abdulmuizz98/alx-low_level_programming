#include "main.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
        char *n = "11";
        char *m = "89";
        char r[2];
        char *res;

        res = infinite_add(n, m, r, 2);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
	return (0);
}
