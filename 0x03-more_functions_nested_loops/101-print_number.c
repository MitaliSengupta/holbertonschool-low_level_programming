#include "holberton.h"

/**
 * print_number - function to print integers
 * @n : integer value
 * Return: Always 0.
 */
void print_number(int n)
{
	unsigned int a, b, count, tmp, pow;

	a = n;
	pow = b = 1;

	if (n < 0)
	{
		a = a * -1;
		_putchar('-');
	}
	else if (n == 0)
	{
		_putchar(a + '0');
	}

	tmp = a;
	while (tmp > 0)
	{
		b++;
		tmp = tmp / 10;
	}
	for (count = 1; count < b; count++)
		pow = pow * 10;
	while (pow > 1)
	{
		_putchar((a / pow) % 10);
			pow = pow / 10;
	}
	_putchar(a % 10 + '0');
}
