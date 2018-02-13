#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function to return a pointer of a 2d array
 *
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: NULL for failure or 0/ neg height/ width
 */
int **alloc_grid(int width, int height)
{

	int **matrix;
	int a, b;

	if (width < 1)
		return (NULL);
	if (height < 1)
		return (NULL);
	matrix = (int **) (malloc(height * sizeof(*matrix)));
	if (matrix == 0)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		matrix[a] = malloc(width * sizeof(matrix));
		if (matrix[a] == 0)
		{
			for (b = 0; b < a; b++)
				free(matrix[b]);
			free(matrix);
			return (NULL);
		}
		for (b = 0; b < width; b++)
			matrix[a][b] = 0;
	}
	return (matrix);
}
