#include "search_algos.h"

/**
 * linear_search - function that uses linear search algorithm
 * @array: array to be searched
 * @size: size of array
 * @value: value to be searched
 * Return: -1 if not found else return the first index
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
