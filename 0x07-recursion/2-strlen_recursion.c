#include "holberton.h"

/**
 * _strlen_recursion - function to return length of string
 * @s: string being passed
 * Return: 0 for null else return function
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
