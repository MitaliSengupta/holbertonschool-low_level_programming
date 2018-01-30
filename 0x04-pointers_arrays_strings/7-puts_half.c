#include "holberton.h"

/**
 * puts_half - printing half of string
 * @str : array variable
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
		;
	a = a + 1;
	for (a = a / 2; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
