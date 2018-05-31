#include "sort.h"

/**
 * radix_sort - sorting an array using radix_sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 * Return: void
 */
void radix_sort(int *array, size_t size)
{
	size_t i, dig = 10;

	if (array == NULL || size <= 1)
		return;
	dig = array[0];

	for (i = 1; dig / i > 0; i = i * 10)
	{
		csort(array, size, i);
		print_array(array, size);
	}
}

/**
 * csort - counting sort function
 * @array: array to be sorted
 * @size: size of the array
 * @div: div power of 10
 * Return: void
 */
void csort(int *array, size_t size, int div)
{
	size_t n, i, digit, prevcount, count[NUM];
	int *new;

	for (i = 0; i < NUM; i++)
		count[i] = 0;

	new = malloc(sizeof(int) * size);

	if (new == NULL)
		return;

	for (n = 0; n < size; n++)
	{
		digit = (array[n] / div) % 10;
		count[digit]++;
	}
	for (n = 1; n < NUM; n++)
	{
		prevcount = count[n - 1];
		count[n] = prevcount + count[n];
	}

	for (n = size; n > 0; n--)
	{
		digit = (array[n - 1] / div) % 10;
		new[count[digit] - 1] = array[n - 1];
		count[digit]--;
	}
	for (i = 0; i < size; i++)
		array[i] = new[i];
	free(new);
}
