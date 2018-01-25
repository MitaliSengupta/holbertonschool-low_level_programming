#include "holberton.h"

/**
 * _isupper - to check for upper case
 * @c: character input variable
 *
 * Return: 1 for positive, 0 for negative
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
