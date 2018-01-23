#include "holberton.h"

/**
 * _abs- computes absolute value of an integer
 * @a : initializes integer values
 * Return: Always 0.
 */
int _abs(int a)
{

	if (a < 0)
		return (a * -1);
	return (a);
}
