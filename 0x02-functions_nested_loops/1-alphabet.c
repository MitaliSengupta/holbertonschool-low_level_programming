#include "holberton.h"

/**
 * print_alphabet - prints alphabet in lowercases.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int a = 'a';

	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
	_putchar('\n');
}
