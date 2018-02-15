#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	unsigned int a;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == 0)
	{
		return (NULL);
	}
	for (a = 0; a < nmemb; a++)
		p[a] = 0;
	return (p);
}
