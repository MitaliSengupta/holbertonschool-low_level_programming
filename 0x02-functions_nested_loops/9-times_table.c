#include "holberton.h"

/**
 * times_table - printing tables of 9
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int a, b;
	int nine;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			nine = a * b;
			if (b == 0)
			{
				_putchar(nine + '0');
			}
			else if (nine <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(nine + '0');
			}
			else if (nine >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(nine / 10 + '0');
				_putchar(nine % 10 + '0');
			}
		}
			_putchar('\n');
	}
}
