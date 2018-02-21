#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - function that executes a function given as a parameter.
 * @array: pointer to array
 * @action: pointer to a function
 * @size: size of the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array != 0 && action != 0)
	{
		for (a = 0; a < size; a++)
			action(array[a]);
	}
}
