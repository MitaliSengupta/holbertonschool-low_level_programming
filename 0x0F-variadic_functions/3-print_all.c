#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printchar - function to print character
 * @list: list being passed
 *
 * Return: void
 */
void _printchar(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * _printstr - function to print string
 * @list: list being passed
 * Return: void
 *
 */
void _printstr(va_list list)
{
	char *s;

	s = va_arg(list, char *);
	if (s == 0)
		s = "(nil)";
	printf("%s", s);
}

/**
 * _printfloat - function to print float
 * @list: list being passed
 * Return: void
 *
 */
void _printfloat(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * _printint - function to print int
 * @list: list being passed
 * Return: void
 *
 */
void _printint(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_all - function to print various arguments
 * @format: constant char argument
 * Return: Void
 */
void print_all(const char * const format, ...)
{
	unsigned int a = 0, b = 0;
	va_list list;
	char *str = "";

	what_format frmt[] = {
		{"c", _printchar},
		{"f", _printfloat},
		{"s", _printstr},
		{"i", _printint},
	};

	va_start(list, format);
	while (format != 0 && format[a / 4] != 0)
	{
		b = a % 4;
		if (frmt[b].type[0] == format[a / 4])
		{
			printf("%s", str);
			frmt[b].f(list);
			str = ", ";
		}
		a++;
	}
	printf("\n");
	va_end(list);
}
