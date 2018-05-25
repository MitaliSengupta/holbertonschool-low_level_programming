#include "sort.h"

/**
 * bubble_sort - Function to bubble sort an array and print each iteration
 * @array: The array to be sorted
 * @size: The size of the array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	int n = 0, y = 0, temp = 0, constant = 1;

	if (array == NULL)
		return;

	for (n = size - 1; constant; n--)
	{
		constant = 0;
		for (y = 0; y < n; y++)
		{
			if (array[y] > array[y + 1])
			{
				constant = 1;
				temp = array[y];
				array[y] = array[y + 1];
				array[y + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
