#include "search_algos.h"

/**
 * _search - recursive function to do binary search
 * @array: array to be searched
 * @beg: beginning of array
 * @size: size of array
 * @value: value to be searched
 * Return: -1 else index
 */
int _search(int *array, size_t beg, size_t size, int value)
{
	size_t mid, i;
	char *space;

	if (beg >= size)
		return (-1);
	mid = beg + (size - beg - 1) / 2;
	printf("Searching in array:");
	space = " ";
	for (i = beg; i < size; i++)
	{
		printf("%s%d", space, array[i]);
		space = ", ";
	}
	printf("\n");
	if (array[mid] == value)
		return (mid);
	if (array[mid] > value)
		return (_search(array, beg, mid, value));
	return (_search(array, mid + 1, size, value));
}

/**
 * binary_search - recursive function to do binary search
 * @array: array to be searched
 * @size: size of array
 * @value: value to be searched
 * Return: -1 else index
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (_search(array, 0, size, value));
}
