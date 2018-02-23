#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function to print strings
 * @separator: string separator
 * @n: number of arguments
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list list;
	char *str;

	va_start(list, n);
	for (a = 0; a < n; a++)
	{
		str = va_arg(list, char *);
		if (str == 0)
			printf("(nil)");
		printf("%s", str);
		if (a != (n - 1) && separator != 0)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
