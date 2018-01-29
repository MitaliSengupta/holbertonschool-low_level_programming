#include "holberton.h"

/**
 * _puts - prints character strings
 * @str : to input string
 * Return: Always 0.
 */
void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
