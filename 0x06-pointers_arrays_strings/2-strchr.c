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

	char *p;

	p = s;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == c)
			return (&p[a]);
	}
	return (&p[a]);
}
