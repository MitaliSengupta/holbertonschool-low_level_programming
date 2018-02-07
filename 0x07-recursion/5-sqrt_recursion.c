#include "holberton.h"

/**
 * _sqrt_recursion - function to print square root of given number
 * @n: number being passed
 * Return: Always 0.
 */
int root_var(int n, int var)
{
	if (var * var == n)
		return(var);
	if (var * var < n)
		return root_var(n, var + 1);
	return (-1);
}

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (n < 1)
		return (-1);
	return (root_var(n, 2));
}
