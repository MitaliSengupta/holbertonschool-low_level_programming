#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: the address of memory to print
 * @max: the size of the memory to print
 *
 * Return: Nothing.
 */
int *array_range(int min, int max)
{
	int a;
	int *p;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == 0)
		return (NULL);
	for (a = 0; min <= max; min++, a++)
		p[a] = min;
	return (p);
}
