#include "main.h"
#include <limits.h>
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    print_last_digit(98);
    print_last_digit(0);
    printf("%d", INT_MIN);
    r = print_last_digit(INT_MIN);
    _putchar('0' + r);
    _putchar('\n');
    return (0);
}
