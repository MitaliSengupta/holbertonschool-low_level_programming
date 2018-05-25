#include "sort.h"

/**
 * quick_sort - function to quick sort an array using lomuto method
 * @array: the array to be sorted
 * @size: size of the array
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size == 0 || size == 1)
		return;
	sort(array, 0, size - 1, size);
}

/**
 * sort - function to call recursive and create new pivots
 * @array: array to be sorted
 * @start: beginning of sorting array
 * @end: end of sorting array
 * @size: size of array
 * Return: void
 */
void sort(int *array, size_t start, size_t end, size_t size)
{
	size_t pivot;

	if (end == 0 || end <= start)
		return;
	pivot = partition(array, start, end, size);
	if (pivot != 0 && pivot > start)
		sort(array, start, pivot - 1, size);
	if (pivot < size - 1)
		sort(array, pivot + 1, end, size);
}

/**
 * partition - function to partition array according to pivot
 * @array: array to be partitioned
 * @start: beginning of comparison index
 * @pivot: partition index
 * @size: size of array
 * Return: void
 */
size_t partition(int *array, size_t start, size_t pivot, size_t size)
{
	size_t a;

	for (a = start; a < pivot; a++)
	{
		if (array[a] < array[pivot])
		{
			if (a != start)
			{
				swap(&array[start], &array[a]);
/*				temp = array[start]; */
/*				array[start] = array[a];*/
/*				array[a] = temp; */
				print_array(array, size);
			}
			start++;
		}
	}
	if (array[start] > array[pivot])
	{
		swap(&array[start], &array[pivot]);
/*		temp = array[start];*/
/*		array[start] = array[pivot];*/
/*		array[pivot] = temp; */
		pivot = start;
		print_array(array, size);
	}
	return (pivot);
}

/**
 * swap - function to swap elements
 * @a: element 1
 * @b: element 2
 * Return: void
 */
void swap(int *a, int *b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
}
