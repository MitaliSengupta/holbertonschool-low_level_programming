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

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	if (c == '\0')
		return (&s[a]);
	return (NULL);
}
