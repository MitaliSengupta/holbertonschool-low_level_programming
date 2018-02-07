#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int prime_var(int n, int var)
{
	if (n % var == 0)
		return (0);
	if (var == n - 1)
		return (1);
	return (prime_var(n, var + 1));
}

int is_prime_number(int n)
{
	if (n == 0)
		return (1);
	if (n == 1)
		return (0);
	if (n < 0)
		return (0);
	return (prime_var(n, 2));
}
