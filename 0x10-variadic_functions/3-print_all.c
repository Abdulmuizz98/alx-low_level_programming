#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_all - prints differently typedarguments 
 * with a predefined format sequence.
 * @format: The predefined format sequence
 * @...: The differently typed arguments.
 */
void print_all(const char * const format, ...)
{
	int i, j;
	char *separator = "";
	va_list list;
	
	printer_t printers[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};
	va_start(list, format);
	
	while (format && format[i])
	{
		j = 0;
		while ( j < 4)
		{
			if (format[i] == printers[j].ch[0])
			{
				printf("%s", separator);
				printers[j].print(list);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");

	va_end(list);
}
/**
 * print_char - prints a character argument
 * @arg: the list that fetches the argument to 
 * be printed
 */
void print_char(va_list arg)
{
	char value = va_arg(arg, int);

	printf("%c", value);
}

/**
 * print_int - prints an integer argument
 * @arg: the list that fetches the argument to 
 * be printed
 */
void print_int(va_list arg)
{
	int value = va_arg(arg, int);

	printf("%d", value);
}
/**
 * print_float - prints a float argument
 * @arg: the list that fetches the argument to
 * be printed 
 */ 
void print_float(va_list arg)
{
	float value = va_arg(arg, double);

	printf("%f", value);
}
/**
 * print_string - prints a string argument
 * @arg: the list that fetches the argument to 
 * be printed
 */
void print_string(va_list arg)
{
	char *value = va_arg(arg, char *);

	if (value == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", value);
}
