#include "holberton.h"

/**
 * print_triangle - function to print symbols in triangle
 *
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = size ; b >= 1; b--)
			{
				if (a < b)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else if (size <= 0)
		_putchar('\n');
}
