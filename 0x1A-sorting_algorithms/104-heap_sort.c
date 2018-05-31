#include "sort.h"

/**
 * heap_sort - function to sort array using heap sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 * Return: void
 */
void heap_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
		return;
	max_heap(array, size);
	heap(array, size, size - 1);
}

/**
 * max_heap - function that build the heap
 * @array: array to use for building heap
 * @size: size of the array
 * Return: void
 */
void max_heap(int *array, size_t size)
{
	int max;

	for (max = (size - 1) / 2; max >= 0; max--)
		child(array, size, size - 1, max);
}

/**
 * child - function to check and assign children in right place
 * @array: array to use to determine children
 * @size: size of array
 * @last: last index of heap created
 * @max: current indexed element of the heap
 */
void child(int *array, size_t size, size_t last, size_t max)
{
	size_t lchild, rchild, maxchild = 0;

	lchild = 2 * max + 1;
	rchild = 2 * max + 2;

	if (lchild > last)
		return;
	if (rchild <= last && array[rchild] > array[lchild])
		maxchild = rchild;

	else
		maxchild = lchild;

	if (array[maxchild] > array[max])
	{
		swap_heap(array, maxchild, max);
		print_array(array, size);
		child(array, size, last, maxchild);
	}

}


/**
 * swap_heap - function to swap elements
 * @array: array being passed
 * @a: swap element 1
 * @b: swap element 2
 * Return: void
 */
void swap_heap(int *array, size_t a, size_t b)
{
	int temp;

	temp = array[a];
	array[a] = array[b];
	array[b] = temp;
}


/**
 * heap - function to recursively sort for heap_sort
 * @array: array to be sorted
 * @size: size of the array
 * @last: last index of the heap
 * Return: void
 */
void heap(int *array, size_t size, size_t last)
{
	if (last == 0)
		return;
	swap_heap(array, 0, last);
	print_array(array, size);
	last--;
	child(array, size, last, 0);
	heap(array, size, last);
}
