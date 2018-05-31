#include "sort.h"

/**
 * shell_sort - sorting algorithm
 * @array: array to sort
 * @size: size of array
 * Return: void
 */
void shell_sort(int *array, size_t size)
{
	size_t jump, i, n, a;

	for (jump = 1; jump < size; jump = 3 * jump + 1)
		;
	for (jump = jump / 3; jump > 0; jump = jump / 3)
	{
		for (i = 0; i < jump; i++)
		{
			n = i;
			while (n < size - jump)
			{
				if (array[n] > array[n + jump])
				{
					swap(&array[n],
					     &array[n + jump]);
					for (a = n; a >= jump; a = a - jump)
					{
					if (array[a] < array[a - jump])
					{
					swap(&array[a],
					&array[a - jump]);
					}
					else
					break;
					}
				}
				else
					n = n + jump;
			}
		}
		print_array(array, size);
	}
}

/**
 * swap - function to swap elements
 * @a: 1st element
 * @b: 2nd element
 */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
