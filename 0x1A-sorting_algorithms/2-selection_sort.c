#include "sort.h"

/**
 * selection_sort - function to sort an array using selection sort method
 * @array: the array to be sorted
 * @size: size of the array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, j, min, temp;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (min == i)
			continue;
		temp = array[i];
		array[i] = array[min];
		array[min] = temp;
/*swap(&array[i], &array[min]);*/
		print_array(array, size);
	}
}

/**
 * swap - swapping elements in array
 * @a: array element 1
 * @b: array element 2
 * Return: void
void swap(int *a, int *b)
*{
*int temp;
*temp = *a;
*a = *b;
*b = temp;
*}
 */
