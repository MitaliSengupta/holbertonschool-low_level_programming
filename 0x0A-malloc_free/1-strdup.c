#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function to return ptr containing cpy of string
 * @str: string to be copied
 *
 * Return: Null for failure else return ptr.
 */
char *_strdup(char *str)
{
	char *s;
	int a, b;

	if (*str == 0)
		return (NULL);
	for (a = 0; str[a] != '\0'; a++)
		;
	s = malloc(a * sizeof(*s) + 1);
	if (s == 0)
	{
		return (NULL);
	}
	for (b = 0; b < a; b++)
	{
		s[b] = str[b];
	}
	s[a] = '\0';
	return (s);
}
