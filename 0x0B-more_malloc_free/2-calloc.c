#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * calloc - function that allocates memory for an array, using malloc
 * @nmemb: number
 * @size: size of
 * Return: NULL if failed.
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
