#include <stdio.h>
#include "holberton.h"

/**
 * print_array - function to print array
 * @a : pointer
 * @n : integer variable
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		if (b < n - 1)
			printf("%d, ", a[b]);
		else
			printf("%d\n", a[b]);
	}
}
