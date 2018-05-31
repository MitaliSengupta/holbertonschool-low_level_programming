#include "sort.h"

/**
 * counting_sort - function to sort arrays using counting sort
 * @array: array to be sorted
 * @size: size of the array
 * Return: void
 */
void counting_sort(int *array, size_t size)
{
	int n = 0, *count = NULL, *new = NULL, max = 0;
	size_t i = 0, tmp = 0, total = 0;

	if (array == NULL || size <= 1)
		return;

	new = malloc(sizeof(*array) * size);

	if (new == NULL)
		return;

	for (; i < size; i++)
	{
		new[i] = array[i];
		if (array[i] > max)
			max = array[i] + 1;
	}
	count = malloc(sizeof(*count) * max);
	if (count == NULL)
	{
		free(new);
		return;
	}

	for (i = 0; i < size; i++)
		count[array[i]]++;
	total = 0;

	for (n = 0; n < max; n++)
	{
		tmp = count[n];
		count[n] += total;
		total += tmp;
	}

	print_array(count, max);

	for (i = 0; i < size; i++)
	{
		array[count[new[i]] - 1] = new[i];
		count[new[i]]--;
	}
	free(count);
	free(new);
}
