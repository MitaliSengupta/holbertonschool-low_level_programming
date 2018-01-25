#include "holberton.h"
/**
 * print_numbers - function to print numbers
 *
 * Return : Always 0
 */
void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		_putchar(a + '0');
	}
	_putchar('\n');
}
