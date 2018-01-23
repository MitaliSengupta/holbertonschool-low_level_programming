#include "holberton.h"

/**
 * _islower - prints 1 if lowecase else prints 0
 * @c : takes an integer
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
