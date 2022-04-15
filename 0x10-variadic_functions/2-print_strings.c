#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function that prints all the string arguments separated.
 * @separator: string to separate the arguments to be printed
 * @n: size of the arguments.
 * @...: variable number of arguments to be printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *j;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		j = va_arg(list, char *);
		if (j == NULL)
			j = "(nil)";
		printf("%s", j);
		if ((i + 1) != n && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
