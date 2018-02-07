#include "holberton.h"

/**
 * _pow_recursion - function to print result of base value raised to power
 * @x: base value
 * @y: power value
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (x == 0)
		return (0);
	else
		return (x * _pow_recursion(x, y - 1));
}
