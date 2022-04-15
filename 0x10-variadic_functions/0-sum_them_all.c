#include <stdlib.h>
#include <stdarg.h>
/**
 * sum_them_all - function that sums up all arguments.
 * @n: size of the arguments.
 * @...: variable number of arguments to be summed up.
 *
 * Return: if n is 0, 0;
 * otherwise the sum of the arguments excluding the
 * first (denoting the size).
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i = 0;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
