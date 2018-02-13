#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function to create an array of chars
 * @c: character
 * @size: the size of the memory to print
 *
 * Return: NULL if 0 or fail else return ptr
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int a;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(*s));
	if (s == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
	{
		s[a] = c;
	}
	return (s);
}
