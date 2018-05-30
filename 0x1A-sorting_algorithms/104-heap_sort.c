#include "sort.h"

/**
 *
 *
 *
 *
 *
 */
void heap_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
		return;
	max_heap(array, size);
	heap(array, size, size - 1);
}

/**
 *
 *
 *
 *
 *
 */
void max_heap(int *array, size_t size)
{
	int max;

	for (max = (size - 1) / 2; max >= 0; max--)
		child(array, size, size - 1, max);
}

/**
 *
 *
 *
 *
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
 *
 *
 *
 *
 */
void swap_heap(int *array, size_t a, size_t b)
{
	int temp;

	temp = array[a];
	array[a] = array[b];
	array[b] = temp;
}


/**
 *
 *
 *
 *
 *
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
