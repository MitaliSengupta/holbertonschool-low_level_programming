#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void free_grid(int **grid, int height)
{
	int a;
	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
