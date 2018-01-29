#include "holberton.h"

/**
 * swap_int - swap values
 * @a : pointer value
 * @b : pointer value
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
