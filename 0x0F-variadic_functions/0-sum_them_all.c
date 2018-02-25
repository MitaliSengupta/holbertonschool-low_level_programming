#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - return sum of all parameters
 * @n: number of arguments
 * Return: sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int sum = 0;
	unsigned int a;

	if (n == 0)
		return (0);
	va_start(list, n);
	for (a = 0; a < n; a++)
	{
		sum = sum + va_arg(list, unsigned int);
	}
	va_end(list);
	return (sum);
}
