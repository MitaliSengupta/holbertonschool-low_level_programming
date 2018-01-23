#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a[] = "Holberton";
		int b;

	for (b = 0; b < 9; b++)
		_putchar(a[b]);
	_putchar('\n');
	return (0);
}
