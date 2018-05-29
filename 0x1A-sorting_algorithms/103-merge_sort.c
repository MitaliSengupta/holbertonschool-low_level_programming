#include "sort.h"

/**
 * merge_sort - function to call division of merge function recursively
 * @array: array to be sorted
 * @size: size of the array
 * Return: void
 */
void merge_sort(int *array, size_t size)
{
	int *tmp;

	if (array == NULL || size <= 1)
		return;

	tmp = malloc(sizeof(array[0]) * size);
	if (tmp == NULL)
		return;

	merge_rec(array, tmp, 0, size);
	free(tmp);
}

/**
 * merge_rec - recursion part of the merge sort
 * @array: array to be sorted
 * @tmp: temporary array to store sorted elements
 * @left: left index of array to sort
 * @right: right index of array to sort
 * Return: void
 */
void merge_rec(int *array, int *tmp, size_t left, size_t right)
{
	size_t middle, i = 0, newleft = 0, newright = 0;

	if (right - left <= 1)
		return;

	middle = (right + left) / 2;
	merge_rec(array, tmp, left, middle);
	merge_rec(array, tmp, middle, right);
	printf("Merging...\n");
	print(array, "left", left, middle);
	print(array, "right", middle, right);
	newleft = left;
	newright = middle;

	for (i = left; i < right; i++)
	{
		if (newleft < middle && (newright >= right || array[newleft]
					 < array[newright]))
		{
			tmp[i] = array[newleft];
			newleft++;
		}
		else
		{
			tmp[i] = array[newright];
			newright++;
		}
	}
	print(tmp, "Done", left, right);
	for (i = left; i < right; i++)
	{
		array[i] = tmp[i];
	}
}

/**
 * print - print function to print arrays
 * @array: array to be printed
 * @order: order of array to be printed
 * @left: left index to print
 * @right: right index to print
 * Return: void
 */
void print(int *array, char *order, size_t left, size_t right)
{
	size_t n;

	printf("[%s]: ", order);
	for (n = left; n < right; n++)
	{
		if (n > left)
			printf(", ");
		printf("%d", array[n]);
	}
	printf("\n");
}
