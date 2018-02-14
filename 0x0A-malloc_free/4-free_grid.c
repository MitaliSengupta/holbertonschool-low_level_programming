#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - freeing matrix
 * @grid: matrix being passed
 * @height: freeing using this variable
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int a;
	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
