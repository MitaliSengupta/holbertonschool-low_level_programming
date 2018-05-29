#include "sort.h"

/**
 *
 *
 *
 *
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
 *
 *
 *
 *
 *
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
 *
 *
 *
 *
 *
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
