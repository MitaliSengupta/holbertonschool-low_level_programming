#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index -function to search for integers
 * @size: size of array
 * @array: array of integers
 * @cmp: pointer to function that compares value
 * Return: -1 for failure else return index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array != 0 && size > 0 && cmp != 0)
	{
		for (a = 0; a < size; a++)
			if (cmp(array[a]))
				return (a);
	}
	else
		return (-1);
	return (-1);
}
