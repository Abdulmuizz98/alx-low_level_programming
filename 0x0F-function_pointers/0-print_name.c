#include <stdlib.h>
/**
 * print_name - prints a name string.
 * @name: the name to be printed.
 * @f: the callback print function pointer.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
