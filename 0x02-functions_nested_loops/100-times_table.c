#include "holberton.h"

/**
 * print_times_table - function to print tables
 * @n : integer values
 * Return: Always 0.
 */
void print_times_table(int n)
{
	int a, b, c;

	if (n >= 15 || n <= 0)
		return;
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			c = a * b;
			if (b == 0)
			{
				_putchar(c + '0');
			}
			else if (c <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(c + '0');
			}
			else if (c >= 10 && c < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(c / 10 + '0');
				_putchar(c % 10 + '0');
			}
			else if (c >= 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(c / 100 + '0');
				_putchar(c / 10 % 10 + '0');
				_putchar(c % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
