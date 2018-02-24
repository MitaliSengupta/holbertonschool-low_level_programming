#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);
void _printchar(va_list list);
void _printstr(va_list list);
void _printfloat(va_list list);
void _printint(va_list list);

typedef struct what_format
{
	char *type;
	void (*f)();
}what_format;

#endif
