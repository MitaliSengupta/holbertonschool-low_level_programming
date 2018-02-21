#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function that prints a name
 * @name: string pointer
 * @f: pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && *name != '\0' && f != 0)
		f(name);
}
