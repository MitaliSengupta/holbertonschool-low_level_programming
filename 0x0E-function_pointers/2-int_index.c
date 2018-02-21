#include "function_pointers.h"
#include <stdlib.h>

/**
 *
 *
 *
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array != 0 || size > 0 || cmp != 0)
	{
		for (a = 0; a < size; a++)
			if (cmp(array[a]))
				return (a);
	}
	return (-1);
}
