#include "holberton.h"

/**
 * prime_var - checking for prime n against each variable
 * @n: integer value being passed for checking
 * @var: variable being tested against for checking prime
 * Return: Always 1 if prime 0 if not
 */
int prime_var(int n, int var)
{
	if (n % var == 0)
		return (0);
	if (var == n - 1)
		return (1);
	return (prime_var(n, var + 1));
}

/**
 * is_prime_number - function to test the input integer as prime
 * @n: integer value being passed to check for prime
 * Return: Always 0.
 */
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
