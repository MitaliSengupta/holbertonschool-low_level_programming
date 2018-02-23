#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function to print numbers
 * @separator: string to separate numbers
 * @n: number of arguments
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list list;

	va_start(list, n);
	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(list, unsigned int));
		if (a != (n - 1) && separator != 0)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
