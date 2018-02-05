#include "holberton.h"

/**
 * _strchr - function to locate a character
 * @s: array strings
 * @c: character that needs to be found
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == c)
			return (s + a);
	}
	return (s + a);
}
