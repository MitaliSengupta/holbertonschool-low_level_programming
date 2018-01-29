#include "holberton.h"

/**
 * _strlen - returning length of a string.
 * @s : character value
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
		;
	return (a);
}
