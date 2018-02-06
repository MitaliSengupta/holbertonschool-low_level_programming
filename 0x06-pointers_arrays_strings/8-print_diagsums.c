#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsum - printing the sum of two diagonals
 * @a: array values
 * @size: size of the matrix
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int b, c;
	int diag1, diag2;

	for (b = 0; b < size * size;  b = b + (size + 1))
	{
		diag1 = diag1 + a[b];
	}
	for (c = size - 1; c < size * size - 1; c = c + (size - 1))
	{
		diag2 = diag2 + a[c];
	}
	printf("%d, %d\n", diag1, diag2);
}
