#include "holberton.h"

/**
 * _isalpha - to check for alphabet characters
 * @c : for integer inputs
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
