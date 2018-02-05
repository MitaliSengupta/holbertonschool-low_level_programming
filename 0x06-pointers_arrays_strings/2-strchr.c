#include "holberton.h"
#define NULL 0

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
		if (p[a] == c)
			return (&p[a]);
	}
	return (&p[a]);
	return (NULL);
}
